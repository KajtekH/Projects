#pragma once
#include <iostream>
#include <string>
#include "Lista.h"
#include "Cechy.h"
#include "Adres.h"
#include "filtr_cech.h"
class Lista_cech
{
	CustomList<Cechy> lista;
	CustomList<Cechy> f_lista;
public:
	Lista_cech(std::string const& file_name);

	void read();

	void read_f();

	void filtr(Filtr_cech& F);

	CustomList<Cechy> get_list();

	Cechy ID_search(int i);
};

