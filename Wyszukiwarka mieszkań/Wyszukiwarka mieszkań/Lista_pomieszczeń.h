#pragma once
#include "Pokoj.h"
#include "Filtr_pomieszczeñ.h"
#include <iostream>
#include <fstream>
class Lista_pomieszczeñ
{
	CustomList<Pokoje> lista;
	CustomList<Pokoje> f_lista;
public:
	Lista_pomieszczeñ(std::string const& file_name);

	void read();

	void read_f();

	void filtr(Filtr_pomieszczeñ& fp);

	CustomList<Pokoje> get_list();

	Pokoje ID_search(int i);
};

