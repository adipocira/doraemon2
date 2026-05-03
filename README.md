# Doraemon 2 ![Static Badge](https://img.shields.io/badge/code-???%2F???-green?style=flat-square&color=%230097e3) ![Static Badge](https://img.shields.io/badge/libultra-???%2F???-green?style=flat-square&color=%23f5cc07)



**Doraemon 2: Nobita to Hikari no Shinden** decompilation

Builds `doraemon2.z64`md5: 0580d96a71671c9e6972fdcf5897cc26

## Building

* make
* git
* a mips toolchain
* python3

Under debian based systems :

```bash
sudo apt update
sudo apt install make git build-essential binutils-mips-linux-gnu python3
```

Under arch based systems :
```bash
sudo pacman -Syuu make git mips64-elf-binutils python3
```

Install the python dependencies using pip (requirements.txt)

---

Place the doraemon 2 ROM at the root of the folder as `baserom.z64` 

! Recommended to run with jobs
```bash
make tools
make setup
make 
```

