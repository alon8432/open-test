#ifndef AST_CHIPS_REGISTER_CPP
#define AST_CHIPS_REGISTER_CPP

#include "ast_chips_register.h"

SioAndOr gpio_read_tab[]
{
	//unlock
	//active
	{LPC2AHB_LDN,0xF0,0x00,0x1E,0xFF},//write gpio address
	{LPC2AHB_LDN,0xF1,0x00,0x78,0xFF},
	{LPC2AHB_LDN,0xF2,0x00,0x00,0xFF},
	{LPC2AHB_LDN,0xF3,0x00,0x00,0xFF},
	{LPC2AHB_LDN,0xF8,0xFC,0x02,0xFF},//Write Mode
	{LPC2AHB_LDN,0xFE,0xFF,0x00,0xFF},//Fire Read
	{LPC2AHB_LDN,0xF4,0xFF,0x00,0xFF},//Read data
	{LPC2AHB_LDN,0xF5,0xFF,0x00,0xFF},
	{LPC2AHB_LDN,0xF6,0xFF,0x00,0xFF},
	{LPC2AHB_LDN,0xF7,0xFF,0x00,0xFF},
	//lock
};
const int gpio_read_tab_count =sizeof(gpio_read_tab)/sizeof(SioAndOr);

SioAndOr gpio_write_tab[]
{
	//unlock
	//active
	{LPC2AHB_LDN,0xF0,0x00,0x1E,0xFF},//write gpio address
	{LPC2AHB_LDN,0xF1,0x00,0x78,0xFF},
	{LPC2AHB_LDN,0xF2,0x00,0x00,0xFF},
	{LPC2AHB_LDN,0xF3,0x00,0x00,0xFF},
	{LPC2AHB_LDN,0xF8,0xFC,0x02,0xFF},//Write Mode
	{LPC2AHB_LDN,0xF4,0xFF,0x00,0xFF},
	{LPC2AHB_LDN,0xF5,0xFF,0x00,0xFF},
	{LPC2AHB_LDN,0xF6,0xFF,0x00,0xFF},
	{LPC2AHB_LDN,0xF7,0xFF,0x00,0xFF},
	{LPC2AHB_LDN,0xFE,0x00,0xCF,0xFF},//Fire wrtie
	//lock
};
const int gpio_write_tab_count=sizeof(gpio_write_tab)/sizeof(SioAndOr);

//>=0xFFFF+0, :Unavailable address
AstGpioMap parallel_gpio_map_tab[]
{
	 //---data--------------------------------------------direction---------------------------------------interrupt_enable--------------------------------interrupt_sensitivity_type0---------------------interrupt_sensitivity_type1---------------------interrupt_sensitivity_type2----------------------interrupt_status--------------------------------reset_tolerant---------------------------------debounce1----------------------------------------debounce2--------------------------------------cmd_src0-----------------------------------------cmd_src1---------------------------------------input_mask---------------------------------------
	 {"A",{0x0000+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0004+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0008+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x000C+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0010+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0014+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0018+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x001C+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0040+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0044+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0060+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0064+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x01D0+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},},
	 {"B",{0x0000+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0004+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0008+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x000C+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0010+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0014+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0018+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x001C+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0040+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0044+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0060+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0064+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x01D0+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},},
	 {"C",{0x0000+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0004+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0008+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x000C+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0010+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0014+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0018+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x001C+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0040+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0044+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0060+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0064+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x01D0+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},},
	 {"D",{0x0000+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0004+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0008+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x000C+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0010+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0014+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0018+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x001C+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0040+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0044+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0060+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0064+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x01D0+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},},
	 {"E",{0x0020+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0024+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0028+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x002C+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0030+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0034+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0038+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x003C+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0048+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x004C+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0068+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x006C+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x01D4+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},},
	 {"F",{0x0020+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0024+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0028+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x002C+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0030+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0034+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0038+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x003C+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0048+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x004C+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0068+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x006C+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x01D4+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},},
	 {"G",{0x0020+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0024+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0028+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x002C+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0030+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0034+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0038+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x003C+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0048+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x004C+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0068+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x006C+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x01D4+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},},
	 {"H",{0x0020+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0024+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0028+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x002C+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0030+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0034+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0038+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x003C+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0048+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x004C+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0068+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x006C+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x01D4+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},},
	 {"I",{0x0070+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0074+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0098+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x009C+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00A0+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00A4+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0018+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00AC+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00B0+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00B4+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0090+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0094+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00B8+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},},
	 {"J",{0x0070+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0074+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0098+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x009C+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00A0+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00A4+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00A8+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00AC+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00B0+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00B4+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0090+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0094+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00B8+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},},
	 {"K",{0x0070+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0074+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0098+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x009C+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00A0+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00A4+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00A8+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00AC+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00B0+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00B4+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0090+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0094+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00B8+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},},
	 {"L",{0x0070+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0074+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0098+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00EC+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00A0+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00A4+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00A8+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00AC+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00B0+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00B4+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0090+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0094+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00B8+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},},
	 {"M",{0x0078+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x007C+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00E8+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00EC+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00F0+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00F4+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00F8+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00FC+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0100+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0104+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00E0+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00E4+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0108+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},},
	 {"N",{0x0078+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x007C+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00E8+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00EC+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00F0+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00F4+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00F8+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00FC+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0100+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0104+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00E0+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00E4+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0108+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},},
	 {"O",{0x0078+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x007C+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00E8+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00EC+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00F0+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00F4+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00F8+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00FC+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0100+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0104+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00E0+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00E4+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0108+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},},
	 {"P",{0x0078+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x007C+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00E8+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00EC+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00F0+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00F4+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00F8+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00FC+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0100+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0104+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00E0+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x00E4+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0108+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},},
	 {"Q",{0x0080+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0084+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0118+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x011C+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0120+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0124+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0128+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x012C+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0130+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0134+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0110+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0114+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0138+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},},
	 {"R",{0x0080+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0084+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0118+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x011C+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0120+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0124+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0128+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x012C+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0130+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0134+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0110+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0114+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0138+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},},
	 {"S",{0x0080+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0084+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0118+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x011C+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0120+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0124+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0128+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x012C+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0130+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0134+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0110+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0114+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0138+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},},
	 {"T",{0x0080+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0084+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0118+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x011C+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0120+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0124+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0128+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x012C+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0130+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0134+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0110+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0114+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0138+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},},
	 {"U",{0x0088+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x008C+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0148+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x014C+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0150+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0154+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0158+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x015C+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0160+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0164+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0140+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0144+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0168+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},},
	 {"V",{0x0088+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x008C+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0148+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x014C+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0150+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0154+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0158+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x015C+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0160+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0164+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0140+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0144+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0168+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},},
	 {"W",{0x0088+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x008C+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0148+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x014C+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0150+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0154+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0158+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x015C+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0160+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0164+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0140+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0144+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0168+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},},
	 {"X",{0x0088+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x008C+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0148+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x014C+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0150+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0154+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0158+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x015C+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0160+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0164+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0140+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0144+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0168+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},},
	 {"Y",{0x01E0+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x01E4+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0178+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x017C+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0180+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0184+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0188+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x018C+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0190+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0194+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0170+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0174+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0198+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},},
	{ "Z",{0x01E0+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x01E4+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0178+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x017C+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0180+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0184+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0188+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x018C+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0190+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0194+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0170+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0174+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0198+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},},
	{"AA",{0x01E0+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x01E4+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0178+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x017C+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0180+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0184+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0188+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x018C+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0190+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0194+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0170+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0174+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0198+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},},
	{"AB",{0x01E0+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x01E4+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0178+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x017C+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0180+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0184+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0188+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x018C+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0190+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0194+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0170+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0174+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0198+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},},
};
const int parallel_gpio_map_tab_count =sizeof(parallel_gpio_map_tab)/sizeof(AstGpioMap);

AstGpioMap serial_gpio_map_tab[]
{
	 //---data--------------------------------------------direction---------------------------------------interrupt_enable--------------------------------interrupt_sensitivity_type0---------------------interrupt_sensitivity_type1---------------------interrupt_sensitivity_type2----------------------interrupt_status--------------------------------reset_tolerant---------------------------------debounce1----------------------------------------debounce2--------------------------------------cmd_src0-----------------------------------------cmd_src1---------------------------------------input_mask---------------------------------------
	 {"A",{0x0200+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0204+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0208+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x020C+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0210+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0214+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0218+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},},
	 {"B",{0x0200+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0204+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0208+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x020C+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0210+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0214+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0218+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},},
	 {"C",{0x0200+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0204+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0208+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x020C+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0210+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0214+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0218+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},},
	 {"D",{0x0200+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0204+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0208+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x020C+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0210+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0214+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0218+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},},
	 {"E",{0x021C+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0220+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0224+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0228+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x022C+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0230+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0234+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},},
	 {"F",{0x021C+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0220+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0224+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0228+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x022C+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0230+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0234+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},},
	 {"G",{0x021C+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0220+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0224+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0228+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x022C+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0230+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0234+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+2,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},},
	 {"H",{0x021C+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0220+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0224+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0228+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x022C+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0230+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0234+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+3,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},},
	 {"I",{0x0238+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x023C+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0240+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0244+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0248+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x024C+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0250+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+0,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},},
	 {"J",{0x0238+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x023C+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0240+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0244+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0248+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x024C+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0x0250+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},{0xFFFF+1,0,NO_AND,NO_OR,NULL_S,NULL_S,NULL_S,},},
};
const int serial_gpio_map_tab_count=sizeof(serial_gpio_map_tab)/sizeof(AstGpioMap);

#endif//AST_CHIPS_REGISTER_CPP