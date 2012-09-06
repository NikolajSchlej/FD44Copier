#ifndef BIOS_H
#define BIOS_H

/* USB BIOS Flashback file header */
static const unsigned char UBF_FILE_HEADER[] =                  {'\x8B','\xA6','\x3C','\x4A','\x23',
                                                                 '\x77','\xFB','\x48','\x80','\x3D',
                                                                 '\x57','\x8C','\xC1','\xFE','\xC4',
                                                                 '\x4D'};
#define UBF_FILE_HEADER_SIZE 0x800

/* BOOTEFI marker */
static const unsigned char BOOTEFI_HEADER[] =                   {'$','B','O','O','T','E','F','I','$'};
#define BOOTEFI_MOTHERBOARD_NAME_OFFSET 14
#define BOOTEFI_MOTHERBOARD_NAME_LENGTH 60

/* ME header */
static const unsigned char ME_HEADER[] =                        {'\x20','\x20','\x80','\x0F','\x40',
                                                                 '\x00','\x00','\x10','\x00','\x00',
                                                                 '\x00','\x00','\x00','\x00','\x00',
                                                                 '\x00'};

/* GbE header */
static const unsigned char GBE_HEADER[] =                       {'\xFF','\xFF','\xFF','\xFF','\xFF',
                                                                 '\xFF','\xFF','\xFF','\xC3','\x10'};
#define GBE_MAC_OFFSET (-12)
#define GBE_MAC_LENGTH 6
static const unsigned char GBE_MAC_STUB[] =                     {'\x88','\x88','\x88','\x88','\x87',
                                                                 '\x88'};
/* FD44 module structure */
static const unsigned char MODULE_HEADER[] =                    {'\x0B','\x82','\x44','\xFD','\xAB',
                                                                 '\xF1','\xC0','\x41','\xAE','\x4E',
                                                                 '\x0C','\x55','\x55','\x6E','\xB9',
                                                                 '\xBD'};
#define MODULE_HEADER_BSA_OFFSET 28
static const unsigned char MODULE_HEADER_BSA[] =                {'B', 'S', 'A', '_'};
#define MODULE_HEADER_LENGTH 36

#define MODULE_LENGTH 552

#endif /* BIOS_H */
