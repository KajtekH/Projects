#pragma once
#include "Lista.h"
#include <string>
class Filtr_miejsc_zainteresowania
{
	CustomList<std::string> lista;

public:
	Filtr_miejsc_zainteresowania();
	void set_miejsce(std::string& m);
	CustomList<std::string> get_list();

	void set_list(CustomList<std::string>& a);

	void clear();
};

