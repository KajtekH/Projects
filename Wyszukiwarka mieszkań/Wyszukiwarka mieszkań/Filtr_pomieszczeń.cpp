#include "Filtr_pomieszczeñ.h"

Filtr_pomieszczeñ::Filtr_pomieszczeñ() : min_iloœæ(0), max_iloœæ(-1), min_³azienki(0), min_sypialnie(0) {};

void Filtr_pomieszczeñ::set_min_iloœæ(int i)
{
	this->min_iloœæ = i;
}
void Filtr_pomieszczeñ::set_max_iloœæ(int i)
{
	this->max_iloœæ = i;
}
void Filtr_pomieszczeñ::set_³azienki(int i)
{
	this->min_³azienki = i;
}
void Filtr_pomieszczeñ::set_sypialnie(int i)
{
	this->min_sypialnie = i;
}

int Filtr_pomieszczeñ::get_min_iloœæ()
{
	return this->min_iloœæ;
}
int Filtr_pomieszczeñ::get_max_iloœc()
{
	return this->max_iloœæ;
}
int Filtr_pomieszczeñ::get_³azienki()
{
	return this->min_³azienki;
}
int Filtr_pomieszczeñ::get_sypialnie()
{
	return this->min_sypialnie;
}