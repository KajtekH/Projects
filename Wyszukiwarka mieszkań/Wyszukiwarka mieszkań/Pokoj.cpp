#include "Pokoj.h"

Pokoje::Pokoje(int& l, int& s, int& i, int& _id) : �azienki(l), sypialnie(s), ilo��(i), id(_id) {};
Pokoje::Pokoje() {};
std::ostream& operator<<(std::ostream& os, const Pokoje& m)
{
	os << m.ilo�� << ";" << m.�azienki << ";" << m.sypialnie << ";";
	return os;
}

Pokoje& Pokoje::operator=(Pokoje& mm)
{
	this->id = mm.id;
	this->�azienki = mm.�azienki;
	this->sypialnie = mm.sypialnie;
	this->ilo�� = mm.ilo��;
	return *this;
}

int Pokoje::get_�azienki()
{
	return this->�azienki;
}

int Pokoje::get_sypialnie()
{
	return this->sypialnie;
}

int Pokoje::get_ilo��()
{
	return this->ilo��;
}

int Pokoje::get_id()
{
	return this->id;
}

void Pokoje::set_�azienki(int& l)
{
	this->�azienki = l;
}

void Pokoje::set_sypialnie(int& s)
{
	this->sypialnie = s;
}

void Pokoje::set_ilo��(int& i)
{
	this->ilo�� = i;
}