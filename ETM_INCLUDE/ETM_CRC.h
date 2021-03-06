#ifndef __ETM_CRC_H
#define __ETM_CRC_H

#define ETM_CRC_VERSION  02

unsigned int ETMCRC16(const void *c_ptr, unsigned int len);
/*
  This is the default ETM CRC 
  This uses a polynomial of 0xA001 and a seed value of 0x0000
*/

unsigned int ETMCRCModbus(const void *c_ptr, unsigned int len);
/*
  This calculates the modbus CRC
  This uses a polynomial of 0xA001 and a seed value of 0xFFFF
*/

#endif
