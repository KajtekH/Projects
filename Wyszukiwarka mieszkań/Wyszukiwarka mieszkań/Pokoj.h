#pragma once
#include <string>
#include "Lista.h"
class Pokoje
{
	int id, �azienki, sypialnie, ilo��;

public:
	Pokoje(int& l, int& s, int& i, int& _id);
	Pokoje();
	friend std::ostream& operator<<(std::ostream& os, const Pokoje& m);

	Pokoje& operator=(Pokoje& mm);

	int get_�azienki();

	int get_sypialnie();

	int get_ilo��();

	int get_id();

	void set_�azienki(int& l);

	void set_sypialnie(int& s);

	void set_ilo��(int& i);
};

