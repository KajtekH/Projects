#pragma once
#include <string>
#include "Lista.h"
class Miejsca_zainteresowania
{
	int id;
	CustomList<std::string> lista;
public:
	Miejsca_zainteresowania(CustomList<std::string>& l, int& _id);
	Miejsca_zainteresowania();

	friend std::ostream& operator<<(std::ostream& os, const Miejsca_zainteresowania& m);

	Miejsca_zainteresowania& operator=(Miejsca_zainteresowania& mm);


	CustomList<std::string> get_list();

	int get_id();
};

