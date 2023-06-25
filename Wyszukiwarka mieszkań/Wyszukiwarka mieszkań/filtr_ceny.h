#pragma once
class filtr_ceny
{
	bool cena;
	int max_cena;
	int min_cena;
public:
	filtr_ceny();

	void set_max(int i);

	void set_min(int i);

	void set_cena(bool& i);

	int get_min();

	int get_max();

	int get_cena();
};

