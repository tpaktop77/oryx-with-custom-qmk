# Oryx with custom QMK

This repository combines [Oryx’s](https://www.zsa.io/oryx) graphical layout editing with custom [QMK](https://qmk.fm) features, including OS-aware shortcuts, language switching, and combos. Custom code lives in the `tpak/custom_qmk` community module, with firmware builds automated through GitHub Actions.

The original Oryx + QMK workflow is described in [this blog post](https://blog.zsa.io/oryx-custom-qmk-features). This repository now adds custom features through a community module instead of editing generated layout files.

## How it works

Each time you run the GitHub Action, the workflow will:

1. Fetch the latest layout from Oryx and commit it to the `oryx` branch.
2. Merge `oryx` into the branch selected in **Use workflow from** (`main` or a feature branch).
3. Update the QMK submodule to the firmware branch required by Oryx.
4. Copy the layout and `modules/` into the QMK build tree, then append `tpak/custom_qmk` to the build copy of `keymap.json`, preserving the existing modules.
5. Build the firmware and upload it as a workflow artifact.

The workflow commits and pushes layout and QMK updates before building. Custom module injection only changes the build copy; generated files under `6JP4n/` remain as exported by Oryx.

## How to use

1. Fork this repository (be sure to **uncheck the "Copy the main branch only" option**).
2. To fetch and build your layout:
   - Go to the **Actions** tab.
   - Select **Fetch and build layout**.
   - Click **Run workflow**.
   - In **Use workflow from**, select `main` or the feature branch containing your custom changes. Do not select `oryx`.
   - Input your layout ID and keyboard type (your layout must be public in Oryx), then run the workflow. The defaults are `6JP4n` and `voyager`.
   - For another layout, adapt the module's layout-specific combos and layer numbers first; see **Custom module** below.
3. A folder containing your layout will be generated at the root of the repository. Edit the layout through Oryx; keep custom code in `modules/tpak/custom_qmk/`.
4. To change custom QMK behavior:
   - Edit the module files described below, following the [QMK community module documentation](https://docs.qmk.fm/features/community_modules).
   - Commit and push your changes on a feature branch, then select that branch when running the workflow.
5. You can continue editing your layout through Oryx:
   - Make your changes in Oryx.
   - Optionally, add a description of your changes in the **Some notes about what you changed** field; if provided, this will be used as commit message.
   - Confirm changes by clicking the **Compile this layout** button.
6. To build the firmware with your custom module, rerun the GitHub Action from the desired branch. Download the firmware from the action’s artifacts; the firmware compiled directly by Oryx does not include this custom module.
7. Flash your downloaded firmware using [Keymapp](https://www.zsa.io/flash#flash-keymap).
8. Enjoy!

## Custom module

The module lives in [`modules/tpak/custom_qmk/`](modules/tpak/custom_qmk/):

| File | Purpose |
| --- | --- |
| `qmk_module.json` | Declares custom keycodes and enables Combo and OS Detection. |
| `custom_qmk.c` | Handles OS-aware shortcuts, language switching, and voice activation. |
| `combos.inc` | Defines the key combinations and their actions for this layout. |
| `config.h` | Configures OS detection. |
| `rules.mk` | Includes `combos.inc` through `INTROSPECTION_KEYMAP_C`, so QMK can count the combos alongside the generated keymap. |

The module is configured for layout `6JP4n`: English and Russian use layers `0` and `1`; other combos refer to layers `6`, `9`, and `10`, Russian key aliases, and Oryx-generated `ST_MACRO_*` identifiers. Review these references when changing layers or macros in Oryx, or when using another layout.

Language switching sends `Ctrl+Shift+1` for English and `Ctrl+Shift+2` for Russian. Configure matching shortcuts on the host; [my_notes.md](my_notes.md) includes a Hammerspoon example for macOS.

For a local build, reproduce the module injection in the workflow's [Build the layout step](.github/workflows/fetch-and-build-layout.yml) before compiling: copy `modules/` into `qmk_firmware/modules/` and add `tpak/custom_qmk` to the copied layout's `keymap.json`. Keep the existing ZSA modules. Building only the exported Oryx files will omit the custom module.

## Oryx Chrome extension

To make building even easier, [@nivekmai](https://github.com/nivekmai) created an [Oryx Chrome extension](https://chromewebstore.google.com/detail/oryx-extension/bocjciklgnhkejkdfilcikhjfbmbcjal) to be able to trigger the GitHub Actions from inside Oryx itself.
