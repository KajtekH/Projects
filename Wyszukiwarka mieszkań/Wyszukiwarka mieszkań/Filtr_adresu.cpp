#include "Filtr_adresu.h"

Filtr_adresu::Filtr_adresu()
{
	CustomList<std::string> miejscowo��;
	CustomList<std::string> ulica;
	this->miejscowo�� = miejscowo��;
	this->ulica = ulica;
}
void Filtr_adresu::set_miejscowo��(std::string s)
{
	miejscowo��.pushBack(s);
}
void Filtr_adresu::set_ulica(std::string s)
{
	ulica.pushBack(s);
}
void Filtr_adresu::set_copy(CustomList<std::string>& s)
{
	miejscowo�� = s;
}
CustomList<std::string> Filtr_adresu::get_miejscowo��()
{
	CustomList<std::string> m = miejscowo��;
	return m;
}
CustomList<std::string> Filtr_adresu::get_ulica()
{
	return this->ulica;
}

void Filtr_adresu::print_m()
{
	miejscowo��.printList();
}
void Filtr_adresu::print_u()
{
	ulica.printList();
}
void Filtr_adresu::clear_miejscowo�ci()
{
	miejscowo��.clear();
}
void Filtr_adresu::clear_ulice()
{
	ulica.clear();
}