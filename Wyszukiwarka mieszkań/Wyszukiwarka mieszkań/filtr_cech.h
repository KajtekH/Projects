#pragma once
class Filtr_cech
{
	int metraz_min,metraz_max, ID, winda, umeblowanie;

public:
	Filtr_cech();
	void set_winda(int i);
	void set_umeblowanie(int i);
	void set_metraz_min(int i);
	void set_metraz_max(int i);
	
	int get_winda();
	int get_emblowanie();
	int get_metraz_min();
	int get_metraz_max();
};

