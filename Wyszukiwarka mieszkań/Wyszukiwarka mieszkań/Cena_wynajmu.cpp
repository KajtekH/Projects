#include "Cena_wynajmu.h"

Cena_wynajmu::Cena_wynajmu(int x, int y)
{
	this->warto�� = x;
	this->ID = y;
}

Cena_wynajmu::Cena_wynajmu()
{
	this->ID = -1;
	this->warto�� = 0;
}

int Cena_wynajmu::get_warto��()
{
	return this->warto��;
}

int Cena_wynajmu::get_id()
{
	return this->ID;
}

void Cena_wynajmu::print(std::ostream& str) const
{
	str << warto�� << ";";
}