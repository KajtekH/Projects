#include "Filtr_pomieszcze�.h"

Filtr_pomieszcze�::Filtr_pomieszcze�() : min_ilo��(0), max_ilo��(-1), min_�azienki(0), min_sypialnie(0) {};

void Filtr_pomieszcze�::set_min_ilo��(int i)
{
	this->min_ilo�� = i;
}
void Filtr_pomieszcze�::set_max_ilo��(int i)
{
	this->max_ilo�� = i;
}
void Filtr_pomieszcze�::set_�azienki(int i)
{
	this->min_�azienki = i;
}
void Filtr_pomieszcze�::set_sypialnie(int i)
{
	this->min_sypialnie = i;
}

int Filtr_pomieszcze�::get_min_ilo��()
{
	return this->min_ilo��;
}
int Filtr_pomieszcze�::get_max_ilo�c()
{
	return this->max_ilo��;
}
int Filtr_pomieszcze�::get_�azienki()
{
	return this->min_�azienki;
}
int Filtr_pomieszcze�::get_sypialnie()
{
	return this->min_sypialnie;
}