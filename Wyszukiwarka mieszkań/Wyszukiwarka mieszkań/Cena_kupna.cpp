#include "Cena_kupna.h"

Cena_kupna::Cena_kupna(int x, int y)
{
	this->wartoœæ = x;
	this->ID = y;
}

Cena_kupna::Cena_kupna()
{
	this->ID = -1;
	this->wartoœæ = 0;
}


int Cena_kupna::get_wartoœæ()
{
	return this->wartoœæ;
}

int Cena_kupna::get_id()
{
	return this->ID;
}

void Cena_kupna::print(std::ostream& str) const
{
	str << wartoœæ << ";";
}