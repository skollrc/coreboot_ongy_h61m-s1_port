# coreboot_noname_h61S1_port

The motherboard can be easily on the web (may resaler arroung 40€ brand new)
https://fr.aliexpress.com/item/4000389822919.html?spm=a2g0s.9042311.0.0.57e76c37nCrNWl

The port has been made using autoport sript

# Usefull Infos

* The folder INFOS containe some outputs of the motherboard
* The folder ROM_AND_BLOBS contain original ROM and coreboot barely functionnal ROM (see Currunt status for more infos)
* Coreboot.config file contiane .config file used to compile the rom
* noname folder contain the folder to put in src/mainboard dir
* By default, all the original bios is readable and writable everythings can be done with <code> flashrom -p internal </code> command

# Currunt status

* Restart, S3 resume and shutdown works
* Network works
* USB boot works (both USB 2.0 and 3.0)
* SATA works
* Sound Works
