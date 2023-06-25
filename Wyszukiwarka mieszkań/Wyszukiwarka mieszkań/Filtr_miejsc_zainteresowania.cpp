#include "Filtr_miejsc_zainteresowania.h"

Filtr_miejsc_zainteresowania::Filtr_miejsc_zainteresowania()
{
	CustomList<std::string> lista;
	this->lista = lista;
}
void Filtr_miejsc_zainteresowania::set_miejsce(std::string& m)
{
	lista.pushBack(m);
}
CustomList<std::string> Filtr_miejsc_zainteresowania::get_list()
{
	return this->lista;
}

void Filtr_miejsc_zainteresowania::set_list(CustomList<std::string>& a)
{
	this->lista = a;
}

void Filtr_miejsc_zainteresowania::clear()
{
	lista.clear();
}