#pragma once
#include <fstream>
#include <iostream>
#include "Adres.h"
#include "Lista.h"
#include "Filtr_adresu.h"
class Lista_adres�w
{
	CustomList<Adres> lista;
	CustomList<Adres> f_lista;
	CustomList<std::string> miejscowo�ci;
public:
	
	Lista_adres�w(std::string const& file_name);

	void read();

	void read_f();

	void read_m();

	void filtr(Filtr_adresu& Fa);
	
	CustomList<Adres> get_list();

	CustomList<Adres> get_Firstlist();

	CustomList<std::string> get_cities();

	Adres ID_search(int i);
};