#include "filtr_cech.h"
Filtr_cech::Filtr_cech() : winda(-1), umeblowanie(-1), metraz_min(0), metraz_max(-1) {};
void Filtr_cech::set_winda(int i)
{
	this->winda = i;
}
void Filtr_cech::set_umeblowanie(int i)
{
	this->umeblowanie = i;
}
void Filtr_cech::set_metraz_min(int i)
{
	this->metraz_min = i;
}
void Filtr_cech::set_metraz_max(int i)
{
	this->metraz_max = i;
}

int Filtr_cech::get_winda()
{
	return this->winda;
}
int Filtr_cech::get_emblowanie()
{
	return this->umeblowanie;
}
int Filtr_cech::get_metraz_min()
{
	return this->metraz_min;
}
int Filtr_cech::get_metraz_max()
{
	return this->metraz_max;
}