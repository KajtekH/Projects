#pragma once
#include <iostream>
#include <string>
#include <list>
#include "Adres.h"
#include "Cena_wynajmu.h"
#include "Cena_kupna.h"
#include "Lista_pomieszczeñ.h"
#include "Lista_miejsc_zainteresowania.h"
class Cechy
{
	bool winda, umeblowanie;
	int metraz, ID;

public:

	Cechy(bool _winda, bool _umeblowanie, int _metraz, int _ID);
	Cechy();
	bool get_elevator();
	bool get_furnishings();
	int get_size();
	int get_ID();
	friend std::ostream& operator<<(std::ostream& os, const Cechy& _mieszkanie);
	Cechy& operator=(const Cechy& c);
};

