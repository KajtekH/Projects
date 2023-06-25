#pragma once
#include "Lista_cen.h"
class Lista_cen_kupna: public Lista_cen
{
	CustomList<Cena_kupna> lista;
	CustomList<Cena_kupna> f_lista;

public:
	Lista_cen_kupna(std::string const& file_name);
	Lista_cen_kupna();
	~Lista_cen_kupna();

	virtual void filtr(filtr_ceny& fcn);

	virtual Lista_cen_kupna* get_class();

	virtual CustomList<Cena_kupna> get_list_k();

	virtual CustomList<Cena_wynajmu> get_list_w();
	

};

