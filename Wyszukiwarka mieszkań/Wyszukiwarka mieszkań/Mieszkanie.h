#pragma once
#include <algorithm>
#include "Lista_adresów.h"
#include "Lista_cech.h"
#include "Lista_miejsc_zainteresowania.h"
#include "Lista_cen.h"
#include "Lista_pomieszczeñ.h"
class Mieszkanie
{
	CustomList<int> adres_ID;
	CustomList<int> cechy_ID;
	CustomList<int> ceny_ID;
	CustomList<int> miejsca_ID;
	CustomList<int> pomieszczenia_ID;
	CustomList<int> finish_list;
public:
	Mieszkanie();
	Mieszkanie(CustomList<Adres> la, CustomList<Cechy> lc, CustomList<Cena_kupna> lcn, CustomList<Miejsca_zainteresowania> lmz, CustomList<Pokoje>lp);
	Mieszkanie(CustomList<Adres> la, CustomList<Cechy> lc, CustomList<Cena_wynajmu> lcn, CustomList<Miejsca_zainteresowania> lmz, CustomList<Pokoje> lp);

	Mieszkanie& operator=(const Mieszkanie& m);
	void search();

	void read();

	CustomList<int> get_list();

	void Print_kupno(Lista_adresów la, CustomList<Cena_kupna> lck, Lista_cech lc, Lista_miejsc_zainteresowania lmz, Lista_pomieszczeñ lp);
	void Print_wynajem(Lista_adresów la, CustomList<Cena_wynajmu> lck, Lista_cech lc, Lista_miejsc_zainteresowania lmz, Lista_pomieszczeñ lp);
};

