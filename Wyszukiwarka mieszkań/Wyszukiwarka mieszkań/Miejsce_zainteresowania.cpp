#include "Miejsce_zainteresowania.h"

Miejsca_zainteresowania::Miejsca_zainteresowania(CustomList<std::string>& l, int& _id) : lista(l), id(_id) {};
Miejsca_zainteresowania::Miejsca_zainteresowania() : id(-1) {};

std::ostream& operator<<(std::ostream& os, const Miejsca_zainteresowania& m)
{
	for (int i = 0; i < m.lista.getSize(); i++)
	{
		os << m.lista.findByPosition(i) << ", ";
	}
	os << ";";
	return os;
}

Miejsca_zainteresowania& Miejsca_zainteresowania::operator=(Miejsca_zainteresowania& mm)
{
	this->id = mm.id;
	this->lista = mm.lista;
	return *this;
}


CustomList<std::string> Miejsca_zainteresowania::get_list()
{
	return this->lista;
}

int Miejsca_zainteresowania::get_id()
{
	return this->id;
}