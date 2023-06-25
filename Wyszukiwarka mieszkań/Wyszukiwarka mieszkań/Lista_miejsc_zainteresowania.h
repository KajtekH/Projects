#pragma once
#include "Miejsce_zainteresowania.h"
#include "Lista.h"
#include <fstream>
#include <sstream>
#include "Filtr_miejsc_zainteresowania.h"
class Lista_miejsc_zainteresowania
{
	CustomList<Miejsca_zainteresowania> lista;
	CustomList<Miejsca_zainteresowania> f_lista;
public:

	Lista_miejsc_zainteresowania(std::string const file_name);

	void read();

	void read_f();

	CustomList<Miejsca_zainteresowania> get_list();

	CustomList<Miejsca_zainteresowania> get_Firstlist();

	void filtr(Filtr_miejsc_zainteresowania& fmz);

	Miejsca_zainteresowania ID_search(int i);

};

