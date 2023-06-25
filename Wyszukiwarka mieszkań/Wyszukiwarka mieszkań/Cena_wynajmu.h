#pragma once
#include "Cena.h"
#include <fstream>
class Cena_wynajmu:public Cena
{

public:
	Cena_wynajmu(int x, int y);

	Cena_wynajmu();

	virtual int get_wartoœæ();

	virtual int get_id();

	virtual void print(std::ostream& str) const;
};

