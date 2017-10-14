/* bsp_spiflash.h spiflash config define file, arduino have not autoload! */
#ifndef __BSP_SPIFLASH_H__
#define __BSP_SPIFLASH_H__

#define SPIFLASH_TYPE SST25VF032
#define SPIFLASH_DEV	SPI
#define SPIFLASH_CS		PB0
#define SPIFLASH_SCK	PB3
#define SPIFLASH_MISO	PB4
#define SPIFLASH_MOSI	PB5
#define SPIFLASH_SPEED_Mhz 25

#endif   //__BSP_SPIFLASH_H__