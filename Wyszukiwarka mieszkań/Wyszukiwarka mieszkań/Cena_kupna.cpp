#include "Cena_kupna.h"

Cena_kupna::Cena_kupna(int x, int y)
{
	this->warto�� = x;
	this->ID = y;
}

Cena_kupna::Cena_kupna()
{
	this->ID = -1;
	this->warto�� = 0;
}


int Cena_kupna::get_warto��()
{
	return this->warto��;
}

int Cena_kupna::get_id()
{
	return this->ID;
}

void Cena_kupna::print(std::ostream& str) const
{
	str << warto�� << ";";
}