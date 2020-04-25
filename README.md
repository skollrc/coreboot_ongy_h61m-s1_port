# coreboot_noname_h61S1_port

The motherboard can be easily on the web (may resaler arroung 40€ brand new)
[FRENCH](https://fr.aliexpress.com/item/4000389822919.html?spm=a2g0s.9042311.0.0.57e76c37nCrNWl)
[ENGLISH] (https://www.aliexpress.com/item/33039746246.html?spm=a2g0o.productlist.0.0.327b72b7D1Vxwq&algo_pvid=6c6c2d30-f8df-4a95-89cf-e7164bdef7f2&algo_expid=6c6c2d30-f8df-4a95-89cf-e7164bdef7f2-1&btsid=0ab6d59515878571088523039e33b9&ws_ab_test=searchweb0_0,searchweb201602_,searchweb201603_)

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

# Testing hardware configuration:
Xeon E3-1245 V2, 8GB RAM GSKILL DDR3 1333Mhz, Kingspec 180G SSD
Boot Ubuntu live throught USB 2.0 and 3.0
Boot Windows 10 and Debian 9 via sata port 1 to 4
