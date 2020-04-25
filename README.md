# coreboot_noname_h61S1_port

The motherboard can be easily on the web (many resaler arround 40€ brand new)
https://fr.aliexpress.com/item/4000389822919.html?spm=a2g0s.9042311.0.0.57e76c37nCrNWl

The port has been made using autoport sript

# Usefull Infos

* The folder INFOS contains some outputs of the motherboard
* The folder ROM_AND_BLOBS contains original ROM and coreboot barely functionnal ROM (see Currunt status for more infos)
* Coreboot.config file contians .config file used to compile the rom
* noname folder contains the folder to put in src/mainboard dir
* By default, all the original bios is readable and writable everythings can be done with <code> flashrom -p internal </code> command

# Currunt status

* Restart, S3 resume and shutdown works
* Network works
* USB boot works
* SATA does not works (don't know why yet)

# Testing hardware configuration:
Xeon E3-1245 V2, 8GB RAM GSKILL DDR3 1333Mhz, Kingspec 180G SSD
Boot Ubuntu live throught USB 2.0 and 3.0
Boot Windows 10 and Debian 9 via sata port 1 to 4
