#include <stdio.h>
#include <stdlib.h>
#include "crcLib.h"

int main()
{
    uint8_t crc;
    uint8_t data[] = {0x03, 0x45, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77};

    crc = crc8_autosar(data, sizeof(data));

    printf("crc: %02x\n", crc);
    return 0;
}
