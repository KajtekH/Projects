#pragma once
#include "Cena.h"
#include <fstream>
class Cena_kupna:public Cena
{

public:
	Cena_kupna(int x, int y);

	Cena_kupna();


	virtual int get_warto��();

	virtual int get_id();

	virtual void print(std::ostream& str) const;
};

