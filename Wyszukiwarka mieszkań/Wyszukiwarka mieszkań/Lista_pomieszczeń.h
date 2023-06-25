#pragma once
#include "Pokoj.h"
#include "Filtr_pomieszcze�.h"
#include <iostream>
#include <fstream>
class Lista_pomieszcze�
{
	CustomList<Pokoje> lista;
	CustomList<Pokoje> f_lista;
public:
	Lista_pomieszcze�(std::string const& file_name);

	void read();

	void read_f();

	void filtr(Filtr_pomieszcze�& fp);

	CustomList<Pokoje> get_list();

	Pokoje ID_search(int i);
};

