#include "Cena_wynajmu.h"

Cena_wynajmu::Cena_wynajmu(int x, int y)
{
	this->wartoœæ = x;
	this->ID = y;
}

Cena_wynajmu::Cena_wynajmu()
{
	this->ID = -1;
	this->wartoœæ = 0;
}

int Cena_wynajmu::get_wartoœæ()
{
	return this->wartoœæ;
}

int Cena_wynajmu::get_id()
{
	return this->ID;
}

void Cena_wynajmu::print(std::ostream& str) const
{
	str << wartoœæ << ";";
}