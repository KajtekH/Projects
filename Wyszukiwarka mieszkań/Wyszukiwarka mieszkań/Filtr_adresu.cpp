#include "Filtr_adresu.h"

Filtr_adresu::Filtr_adresu()
{
	CustomList<std::string> miejscowoœæ;
	CustomList<std::string> ulica;
	this->miejscowoœæ = miejscowoœæ;
	this->ulica = ulica;
}
void Filtr_adresu::set_miejscowoœæ(std::string s)
{
	miejscowoœæ.pushBack(s);
}
void Filtr_adresu::set_ulica(std::string s)
{
	ulica.pushBack(s);
}
void Filtr_adresu::set_copy(CustomList<std::string>& s)
{
	miejscowoœæ = s;
}
CustomList<std::string> Filtr_adresu::get_miejscowoœæ()
{
	CustomList<std::string> m = miejscowoœæ;
	return m;
}
CustomList<std::string> Filtr_adresu::get_ulica()
{
	return this->ulica;
}

void Filtr_adresu::print_m()
{
	miejscowoœæ.printList();
}
void Filtr_adresu::print_u()
{
	ulica.printList();
}
void Filtr_adresu::clear_miejscowoœci()
{
	miejscowoœæ.clear();
}
void Filtr_adresu::clear_ulice()
{
	ulica.clear();
}