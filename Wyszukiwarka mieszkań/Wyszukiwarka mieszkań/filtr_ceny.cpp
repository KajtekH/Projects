#include "filtr_ceny.h"

filtr_ceny::filtr_ceny() : min_cena(0), max_cena(-1) {};

void filtr_ceny::set_max(int i)
{
	this->max_cena = i;
}

void filtr_ceny::set_min(int i)
{
	this->min_cena = i;
}

void filtr_ceny::set_cena(bool& i)
{
	this->cena = i;
}

int filtr_ceny::get_min()
{
	return this->min_cena;
}

int filtr_ceny::get_max()
{
	return this->max_cena;
}

int filtr_ceny::get_cena()
{
	return this->cena;
}