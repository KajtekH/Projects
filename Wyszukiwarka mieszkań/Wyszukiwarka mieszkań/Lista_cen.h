#pragma once
#include "Cena_kupna.h"
#include "Cena_wynajmu.h"
#include "filtr_ceny.h"
#include "Lista.h"
#include <fstream>
#include <iostream>
#include <string>
#include <typeinfo>

class Lista_cen
{
protected:
	Cena *wsk;

public:
	virtual void filtr(filtr_ceny& fcn) = 0;
	virtual Lista_cen* get_class()  = 0;
	virtual CustomList<Cena_kupna> get_list_k() = 0;
	virtual CustomList<Cena_wynajmu> get_list_w() = 0;

};

