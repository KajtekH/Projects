#pragma once
#include "Lista_cen.h"
class Lista_cen_wynajmu: public Lista_cen
{
	CustomList<Cena_wynajmu> f_lista;
	CustomList<Cena_wynajmu> lista;
public:
	Lista_cen_wynajmu();
	~Lista_cen_wynajmu();
	Lista_cen_wynajmu(std::string const& file_name);

	virtual void filtr(filtr_ceny& fcn);

	virtual Lista_cen_wynajmu* get_class();

	virtual CustomList<Cena_wynajmu> get_list_w();

	virtual CustomList<Cena_kupna> get_list_k();
	


};

