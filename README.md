🚪 SOMEONE NEXT DOOR

A 3D First-Person Psychological Horror Experience

Sesuatu di balik dinding kamar sebelah tidak seharusnya ada di sana.

📖 Tentang Proyek

SOMEONE NEXT DOOR adalah proyek game 3D Psychological Horror yang dikembangkan menggunakan Unreal Engine (Blueprint-driven). Game ini berfokus pada eksplorasi ruang tertutup yang klaustrofobik, pencahayaan atmosferik yang kontras, serta interaksi lingkungan yang membangun ketegangan psikologis secara perlahan.

✨ Fitur & Elemen Utama

Atmosfer & Desain Audio Imersif

Latar suara ambien malam hari (Malam_Ambience), dengung nada telepon samar (Faint_Dial_Tone), efek suara pintu interaktif, serta stinger horor dinamis.

Sistem Interaksi Lingkungan

Interaksi objek berbasis Blueprint (BP_PlayerCharacter & BP_TestInteractable), meliputi mekanik buka/tutup pintu (BP_Door), sakelar/perilaku lampu (BP_Lampu), bingkai foto (BP_Foto), hingga perangkat laptop (BP_Laptop) dengan pemutar media video terintegrasi (MediaPlayer_LaptopKu).

Arsitektur & Material Realistis

Lingkungan interior bertekstur PBR resolusi 1K–2K (Stained Concrete Walls, Interior Tiles, serta perabotan klasik dan modern).

Alur Antarmuka & Level Terstruktur

Dilengkapi layar pembuka (WBP_Intro), menu utama khusus (MainMenu / WBP_MainMenu dengan tipografi kustom Frankentype), serta level utama (MainNew).

🗂️ Struktur Proyek

SOMEONE-NEXT-DOOR/
├── Config/                         # Konfigurasi Engine, Input, dan GameMode
│   ├── DefaultEngine.ini
│   ├── DefaultGame.ini
│   └── DefaultInput.ini
└── Content/
    ├── MyContent/                  # Aset inti dan logika kustom game
    │   ├── Audio/                  # Ambience malam & SFX pintu
    │   ├── BP_Mesh/                # Blueprint objek interaktif (Door, Lampu, Laptop, Foto)
    │   ├── Character/              # BP_PlayerCharacter, GM_Horror, sistem interaksi
    │   ├── Foto/                   # Material & tekstur elemen foto/poster
    │   ├── Image/                  # Aset grafis & branding
    │   ├── Map/                    # Level game (MainMenu, MainNew, Uji)
    │   ├── Material/               # Material PBR lantai & dinding beton
    │   ├── Mesh/                   # 3D Mesh kustom (Door, Lampu, Laptop + MediaPlayer)
    │   ├── SFX/                    # Efek suara ketegangan & dial tone
    │   └── UI/                     # Widget Blueprint (WBP_Intro, WBP_MainMenu) & Font
    ├── FreeFurniturePack/          # Aset interior & properti furnitur
    └── StarterContent/             # Aset dasar Unreal Engine


🛠️ Tech Stack

Game Engine: Unreal Engine 4 (Blueprint Visual Scripting)

Version Control: Git & Git LFS (.gitattributes dikonfigurasi untuk pelacakan aset .uasset dan .umap)

Asset Pipeline: PBR Materials (2K/1K), UMG (Unreal Motion Graphics), Unreal Media Framework

🚀 Cara Menjalankan Proyek (Untuk Developer)

Pastikan Git LFS terpasang sebelum melakukan clone agar file .uasset dan .umap terunduh secara utuh:

git lfs install
git clone https://github.com/DrayeCare/SOMEONE-NEXT-DOOR.git


Buka file .uproject menggunakan Unreal Engine 4.27.

Tunggu proses kompilasi shader selesai pada pembukaan pertama.

Buka map Content/MyContent/Map/MainMenu.umap (atau MainNew.umap untuk langsung menguji gameplay), lalu tekan Play (Alt + P).

👤 Kreator

Dikembangkan oleh Daniel Phillip Limbhoro (DALIMPHIL / @DrayeCare)
