
#include "gpio.h"

Cgpio::Cgpio()
{

}


void Cgpio::set_gpio_base(GpioAddrT addr)
{
	this->gpio_base=addr;
}

int Cgpio::convert(int pin)
{
	OUT_ERROR
	
	return -1;
}

bool  Cgpio::is_exist(int pin)// this by chipset define ie .some chip gpio 0-32 ,some chip gpio 0-64
{
	return true;
}

void Cgpio::list_gpio()
{
	OUT_ERROR
}

int Cgpio::parse(int pin)
{
	OUT_ERROR

	return -1;
}

int Cgpio::set_native(int pin)
{
	OUT_ERROR

	return -1;
}

int Cgpio::set_gpi(int pin)
{
	OUT_ERROR

	return -1;
}

int Cgpio::set_gpo(int pin,int high_low)//high_low: GPO_LOW ,GPO_HIGH
{
	OUT_ERROR

	return -1;
}
