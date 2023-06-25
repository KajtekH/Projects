#include "Adres.h"

Adres::Adres() {};

Adres::Adres(std::string _miejscowosc, std::string _ulica, int _nr, int _id): Miejscowosc(_miejscowosc), Ulica(_ulica), nr_budynku(_nr), ID(_id) {};

std::ostream& operator<<(std::ostream& os, const Adres& _adres)
{
	os << _adres.Miejscowosc << ";" << _adres.Ulica << ";" << _adres.nr_budynku << ";";
	return os;
}

Adres& Adres::operator=(const Adres& a)
{
	this->ID = a.ID;
	this->Miejscowosc = a.Miejscowosc;
	this->nr_budynku = a.nr_budynku;
	this->Ulica = a.Ulica;
	return *this;
}

void Adres::set_city(std::string& s)
{
	this->Miejscowosc = s;
}

void Adres::set_street(std::string& s)
{
	this->Ulica = s;
}

std::string Adres::get_city()
{
	return this->Miejscowosc;
}

std::string Adres::get_street()
{
	return this->Ulica;
}

int Adres::get_ID()
{
	return this->ID;
}