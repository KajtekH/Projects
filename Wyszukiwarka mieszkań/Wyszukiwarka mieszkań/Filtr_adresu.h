#pragma once
#include <string>
#include <iostream>
#include "Lista.h"
class Filtr_adresu
{
	CustomList<std::string> miejscowoœæ;
	CustomList<std::string> ulica;

public:
	Filtr_adresu();
	void set_miejscowoœæ(std::string s);
	void set_ulica(std::string s);
	void set_copy(CustomList<std::string>& s);
	CustomList<std::string> get_miejscowoœæ();
	CustomList<std::string> get_ulica();

	void print_m();
	void print_u();
	void clear_miejscowoœci();
	void clear_ulice();
};

