#include "Pokoj.h"

Pokoje::Pokoje(int& l, int& s, int& i, int& _id) : ³azienki(l), sypialnie(s), iloœæ(i), id(_id) {};
Pokoje::Pokoje() {};
std::ostream& operator<<(std::ostream& os, const Pokoje& m)
{
	os << m.iloœæ << ";" << m.³azienki << ";" << m.sypialnie << ";";
	return os;
}

Pokoje& Pokoje::operator=(Pokoje& mm)
{
	this->id = mm.id;
	this->³azienki = mm.³azienki;
	this->sypialnie = mm.sypialnie;
	this->iloœæ = mm.iloœæ;
	return *this;
}

int Pokoje::get_³azienki()
{
	return this->³azienki;
}

int Pokoje::get_sypialnie()
{
	return this->sypialnie;
}

int Pokoje::get_iloœæ()
{
	return this->iloœæ;
}

int Pokoje::get_id()
{
	return this->id;
}

void Pokoje::set_³azienki(int& l)
{
	this->³azienki = l;
}

void Pokoje::set_sypialnie(int& s)
{
	this->sypialnie = s;
}

void Pokoje::set_iloœæ(int& i)
{
	this->iloœæ = i;
}