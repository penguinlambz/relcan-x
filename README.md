# Relcan X Recreation

- this repo contains the full relcan x recreation, i mean it when i say the full thing.
- go ahead and take whatever you want from this hack, after all nothing in this hack is accurate
- also this runs on refresh 12 so yea

It builds the following ROMs:

* relcan-tbh.z64


this doesnt contain the baserom for obvious reasons, just get a sm64 rom and call it baserom.(VERSION).z64
i recommend using the american rom since thats the one this recreation is based off

## credits

* KillaBarnee/MegaCd64 - the dudaw 2014 mario model
* sonicdude143 - research, textures and testing
* 91BetaMan - models
* Holo Mario - original title screen model and research
* aLittleBit64 - textures and models
* legony/norwegianlamb - textures and testing
* Marionova64 - research
* Josemax64 - testing
* Joé - testing
* adimral - testing

ok now heres the usual decomp setup tutorial

## Quick Start (for Ubuntu)

1. Install prerequisites: `sudo apt install -y build-essential git binutils-mips-linux-gnu python3 libaudiofile-dev`
2. Clone the repo from within Linux: `git clone https://github.com/n64decomp/sm64.git`
3. Place a Super Mario 64 ROM called `baserom.<VERSION>.z64` into the project folder for asset extraction, where `VERSION` can be `us`, `jp`, or `eu`.
4. Run `make` to build. Qualify the version through `make VERSION=<VERSION>`. Add `-j4` to improve build speed (hardware dependent).

Ensure the repo path length does not exceed 255 characters. Long path names result in build errors.

## Installation

### Windows

Install WSL and a distro of your choice following
[Windows Subsystem for Linux Installation Guide for Windows 10.](https://docs.microsoft.com/en-us/windows/wsl/install-win10)
We recommend either Debian or Ubuntu 18.04 Linux distributions under WSL.
Note: WSL1 does not currently support Ubuntu 20.04.

Next, clone the SM64 repo from within the Linux shell:
`git clone https://github.com/n64decomp/sm64.git`

Then continue following the directions in the [Linux](#linux) installation section below.

### Linux

There are 3 steps to set up a working build.

#### Step 1: Install dependencies

The build system has the following package requirements:
 * binutils-mips
 * python3 >= 3.6
 * libaudiofile
 * qemu-irix

Dependency installation instructions for common Linux distros are provided below:

##### Debian / Ubuntu
To install build dependencies:
```
sudo apt install -y build-essential git binutils-mips-linux-gnu python3 libaudiofile-dev
```

Download latest package from [qemu-irix Releases.](https://github.com/n64decomp/qemu-irix/releases)

Install this package with:
```
sudo dpkg -i qemu-irix-2.11.0-2169-g32ab296eef_amd64.deb
```

##### Arch Linux
To install build dependencies:
```
sudo pacman -S base-devel python audiofile
```
Install the following AUR packages:
* [mips64-elf-binutils](https://aur.archlinux.org/packages/mips64-elf-binutils) (AUR)
* [qemu-irix-git](https://aur.archlinux.org/packages/qemu-irix-git) (AUR)


##### Other Linux distributions

Most modern Linux distributions should have equivalent packages to the other two listed above.
You may have to use a different version of GNU binutils. Listed below are fully compatible binutils
distributions with support in the makefile, and examples of distros that offer them:

* `mips64-elf-` (Arch AUR)
* `mips-linux-gnu-` (Ubuntu and other Debian-based distros)
* `mips64-linux-gnu-` (RHEL/CentOS/Fedora)

You may also use [Docker](#docker-installation) to handle installing an image with minimal dependencies.

#### Step 2: Copy baserom(s) for asset extraction

For each version (jp/us/eu) for which you want to build a ROM, put an existing ROM at
`./baserom.<VERSION>.z64` for asset extraction.

##### Step 3: Build the ROM

Run `make` to build the ROM (defaults to `VERSION=us`).
Other examples:
```
make VERSION=jp -j4       # build (J) version instead with 4 jobs
make VERSION=eu COMPARE=0 # build (EU) version but do not compare ROM hashes
```

Resulting artifacts can be found in the `build` directory.

The full list of configurable variables are listed below, with the default being the first listed:

* ``VERSION``: ``us``, ``jp``, ``eu``, ``sh`` (WIP)
* ``GRUCODE``: ``f3d_old``, ``f3d_new``, ``f3dex``, ``f3dex2``, ``f3dzex``
* ``COMPARE``: ``1`` (compare ROM hash), ``0`` (do not compare ROM hash)
* ``NON_MATCHING``: Use functionally equivalent C implementations for non-matchings. Also will avoid instances of undefined behavior.
* ``CROSS``: Cross-compiler tool prefix (Example: ``mips64-elf-``).
* ``QEMU_IRIX``: Path to a ``qemu-irix`` binary.

### macOS

Installing Docker is the recommended avenue for macOS users. This project does not support macOS natively due to lack of macOS host support.

### Docker Installation

#### Create Docker image

Create the docker image with `docker build -t sm64`.

#### Build

To build, mount the local filesystem into the Docker container and build the ROM with `docker run`.

##### macOS example for (U):
```
docker run --rm --mount type=bind,source="$(pwd)",destination=/sm64 sm64 make VERSION=us -j4
```

##### Linux example for (U):
For a Linux host, Docker needs to be instructed which user should own the output files:
```
docker run --rm --mount type=bind,source="$(pwd)",destination=/sm64 --user $UID:$UID sm64 make VERSION=us -j4
```

Resulting artifacts can be found in the `build` directory.

## Project Structure
	
	sm64
	├── actors: object behaviors, geo layout, and display lists
	├── asm: handwritten assembly code, rom header
	│   └── non_matchings: asm for non-matching sections
	├── assets: animation and demo data
	│   ├── anims: animation data
	│   └── demos: demo data
	├── bin: C files for ordering display lists and textures
	├── build: output directory
	├── data: behavior scripts, misc. data
	├── doxygen: documentation infrastructure
	├── enhancements: example source modifications
	├── include: header files
	├── levels: level scripts, geo layout, and display lists
	├── lib: SDK library code
	├── rsp: audio and Fast3D RSP assembly code
	├── sound: sequences, sound samples, and sound banks
	├── src: C source code for game
	│   ├── audio: audio code
	│   ├── buffers: stacks, heaps, and task buffers
	│   ├── engine: script processing engines and utils
	│   ├── game: behaviors and rest of game source
	│   ├── goddard: Mario intro screen
	│   └── menu: title screen and file, act, and debug level selection menus
	├── text: dialog, level names, act names
	├── textures: skybox and generic texture data
	└── tools: build tools

## Contributing

Pull requests are welcome. For major changes, please open an issue first to
discuss what you would like to change.

Run `clang-format` on your code to ensure it meets the project's coding standards.

Official Discord: [discord.gg/DuYH3Fh](https://discord.gg/DuYH3Fh)
