#include "Filtr_adresu.h"

Filtr_adresu::Filtr_adresu()
{
	CustomList<std::string> miejscowość;
	CustomList<std::string> ulica;
	this->miejscowość = miejscowość;
	this->ulica = ulica;
}
void Filtr_adresu::set_miejscowość(std::string s)
{
	miejscowość.pushBack(s);
}
void Filtr_adresu::set_ulica(std::string s)
{
	ulica.pushBack(s);
}
void Filtr_adresu::set_copy(CustomList<std::string>& s)
{
	miejscowość = s;
}
CustomList<std::string> Filtr_adresu::get_miejscowość()
{
	CustomList<std::string> m = miejscowość;
	return m;
}
CustomList<std::string> Filtr_adresu::get_ulica()
{
	return this->ulica;
}

void Filtr_adresu::print_m()
{
	miejscowość.printList();
}
void Filtr_adresu::print_u()
{
	ulica.printList();
}
void Filtr_adresu::clear_miejscowości()
{
	miejscowość.clear();
}
void Filtr_adresu::clear_ulice()
{
	ulica.clear();
}