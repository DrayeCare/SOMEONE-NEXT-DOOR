 <div align="center">

# 🚪 SOMEONE NEXT DOOR

**A 3D First-Person Psychological Horror Experience**

[![Unreal Engine](https://img.shields.io/badge/Unreal%20Engine-4.27-313131?style=for-the-badge&logo=unrealengine&logoColor=white)](https://www.unrealengine.com/)
[![Git LFS](https://img.shields.io/badge/Git%20LFS-Enabled-F05032?style=for-the-badge&logo=git&logoColor=white)](https://git-lfs.github.com/)
[![Genre](https://img.shields.io/badge/Genre-Psychological%20Horror-8B0000?style=for-the-badge)](#)
[![Status](https://img.shields.io/badge/Status-In%20Development-yellow?style=for-the-badge)](#)

*Something behind the wall next door shouldn't be there.*

</div>

---

## 📖 About the Project

**SOMEONE NEXT DOOR** is a 3D psychological horror game developed using **Unreal Engine 4.27**, primarily utilizing Blueprint-based gameplay systems.

The game focuses on exploring confined interior spaces, atmospheric lighting, environmental details, and interactive objects designed to gradually build psychological tension.

Through its environment, sound design, and interactive elements, the project aims to create an unsettling experience within an ordinary residential setting.

---

## ✨ Features & Gameplay Elements

- **Immersive Atmosphere & Audio**
  - Nighttime ambient audio (`Malam_Ambience`).
  - Faint telephone dial tone (`Faint_Dial_Tone`).
  - Interactive door sound effects.
  - Horror stinger sound effects.

- **Interactive Environment**
  - Blueprint-based interaction system involving `BP_PlayerCharacter` and `BP_TestInteractable`.
  - Interactive doors (`BP_Door`) with opening and closing functionality.
  - Light switches and lighting interactions (`BP_Lampu`).
  - Interactive photo frames (`BP_Foto`).
  - Interactive laptop (`BP_Laptop`) with integrated video playback using `MediaPlayer_LaptopKu`.

- **Environment & Materials**
  - Interior environments featuring PBR materials.
  - 1K–2K texture assets.
  - Stained concrete walls, interior flooring, and a combination of classic and modern furniture.

- **UI & Level Design**
  - Intro screen (`WBP_Intro`).
  - Custom main menu (`MainMenu` / `WBP_MainMenu`).
  - Custom typography using the *Frankentype* font.
  - Main gameplay level (`MainNew`).

---

## 🖼️ Screenshots

> Gameplay screenshots will be added as development progresses.

<!-- Add screenshots here -->

---

## 🛠️ Built With

| Technology | Description |
|---|---|
| Unreal Engine 4.27 | Game engine |
| Blueprint | Gameplay logic and interactive systems |
| Unreal Engine Media Framework | Video playback integration |
| Git | Version control |
| Git LFS | Large asset management |

---

## 🗂️ Project Structure

```text
SOMEONE-NEXT-DOOR/
├── Config/                              # Engine, input, and game configuration
│   ├── DefaultEngine.ini
│   ├── DefaultGame.ini
│   └── DefaultInput.ini
└── Content/
    ├── MyContent/                       # Core game content and custom assets
    │   ├── Audio/                       # Ambient audio and door sound effects
    │   ├── BP_Mesh/                     # Interactive object Blueprints
    │   ├── Character/                    # Character, GameMode, and interaction systems
    │   ├── Foto/                        # Photo-related materials and textures
    │   ├── Image/                       # Graphics and branding assets
    │   ├── Map/                         # MainMenu, MainNew, and Uji levels
    │   ├── Material/                     # PBR materials for interior environments
    │   ├── Mesh/                         # Custom meshes and media-related assets
    │   ├── SFX/                          # Horror effects and audio assets
    │   └── UI/                           # Widget Blueprints and custom fonts
    ├── FreeFurniturePack/               # Furniture assets
    └── StarterContent/                  # Unreal Engine starter assets
```

---

## 🚀 Getting Started

### Requirements

- Unreal Engine 4.27
- Windows
- Git LFS

### Setup

1. Clone this repository.
2. Make sure Git LFS is installed and configured.
3. Pull the LFS assets if they have not been downloaded.
4. Open `SOMEONE_NEXT_DOOR.uproject` using Unreal Engine 4.27.

---

## 📌 Development Status

<details>
<summary>Current Project Status</summary>

**SOMEONE NEXT DOOR** is currently under development.

Gameplay mechanics, environments, audio, and other elements may evolve throughout development.

</details>

---

<div align="center">

**SOMEONE NEXT DOOR**

*An indie psychological horror game in development.*

</div>
