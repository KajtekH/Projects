#pragma once
#include <conio.h>
#include <locale>
#include <iostream>
#include "Lista_adres�w.h"
#include "Lista_cech.h"
#include "Filtr_miejsc_zainteresowania.h"
#include "Lista_miejsc_zainteresowania.h"
#include "Filtr_pomieszcze�.h"
#include "Lista_cen.h"
#include "Lista_cen_kupna.h"
#include "Lista_cen_wynajmu.h"
class interfejs
{
	bool end = 0;
public:
	void strona_1(Lista_cen** wsk, Lista_cen_kupna& lck, Lista_cen_wynajmu& lcw);

	void strona_2(Lista_adres�w& la, Filtr_adresu& fa, Lista_cech& lc, Filtr_cech& fc, Lista_miejsc_zainteresowania& lmz, Filtr_miejsc_zainteresowania& fmz, Filtr_pomieszcze�& fp, filtr_ceny& fcn);
	
	void adres_1(Lista_adres�w& la, Filtr_adresu& fa);

	void adres_2(Lista_adres�w& la, Filtr_adresu& fa);

	void metra�_min(Filtr_cech& fc);

	void metra�_max(Filtr_cech& fc);

	void umeblowanie(Filtr_cech& fc);
	void winda(Filtr_cech& fc);

	void miejsca(Lista_miejsc_zainteresowania& lmz, Filtr_miejsc_zainteresowania& fmz);

	void pokoje(Filtr_pomieszcze�& fp);
	void pokoje_max(Filtr_pomieszcze�& fp);

	void �azienki(Filtr_pomieszcze�& fp);

	void sypialnie(Filtr_pomieszcze�& fp);

	void Filtr(Filtr_adresu& fa, Filtr_cech& fc, Filtr_miejsc_zainteresowania& fmz, Filtr_pomieszcze�& fp);

	void cena_min(filtr_ceny& fcn);

	void cena_max(filtr_ceny& fcn);
};

