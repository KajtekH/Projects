#pragma once
#include <string>
#include "Lista.h"
class Pokoje
{
	int id, ³azienki, sypialnie, iloœæ;

public:
	Pokoje(int& l, int& s, int& i, int& _id);
	Pokoje();
	friend std::ostream& operator<<(std::ostream& os, const Pokoje& m);

	Pokoje& operator=(Pokoje& mm);

	int get_³azienki();

	int get_sypialnie();

	int get_iloœæ();

	int get_id();

	void set_³azienki(int& l);

	void set_sypialnie(int& s);

	void set_iloœæ(int& i);
};

