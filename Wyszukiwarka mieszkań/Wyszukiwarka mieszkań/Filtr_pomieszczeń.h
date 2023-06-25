#pragma once
class Filtr_pomieszczeñ
{
	int min_iloœæ, max_iloœæ, min_³azienki, min_sypialnie;

public:
	Filtr_pomieszczeñ();

	void set_min_iloœæ(int i);
	void set_max_iloœæ(int i);
	void set_³azienki(int i);
	void set_sypialnie(int i);

	int get_min_iloœæ();
	int get_max_iloœc();
	int get_³azienki();
	int get_sypialnie();
};

