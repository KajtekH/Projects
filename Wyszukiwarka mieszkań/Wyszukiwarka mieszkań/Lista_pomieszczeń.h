#pragma once
#include "Pokoj.h"
#include "Filtr_pomieszczeń.h"
#include <iostream>
#include <fstream>
class Lista_pomieszczeń
{
	CustomList<Pokoje> lista;
	CustomList<Pokoje> f_lista;
public:
	Lista_pomieszczeń(std::string const& file_name);

	void read();

	void read_f();

	void filtr(Filtr_pomieszczeń& fp);

	CustomList<Pokoje> get_list();

	Pokoje ID_search(int i);
};

