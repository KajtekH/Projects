#pragma once
#include <string>
#include <iostream>
#include "Lista.h"
class Filtr_adresu
{
	CustomList<std::string> miejscowość;
	CustomList<std::string> ulica;

public:
	Filtr_adresu();
	void set_miejscowość(std::string s);
	void set_ulica(std::string s);
	void set_copy(CustomList<std::string>& s);
	CustomList<std::string> get_miejscowość();
	CustomList<std::string> get_ulica();

	void print_m();
	void print_u();
	void clear_miejscowości();
	void clear_ulice();
};

