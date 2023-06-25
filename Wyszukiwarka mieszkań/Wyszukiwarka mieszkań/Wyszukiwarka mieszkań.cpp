#include "Cechy.h"
#include "Lista_cech.h"
#include "Adres.h"
#include "Lista_adresów.h"
#include "Cena_kupna.h"
#include "Cena_wynajmu.h"
#include "Lista_miejsc_zainteresowania.h"
#include "Lista_pomieszczeń.h"
#include "Miejsce_zainteresowania.h"
#include "Pokoj.h"
#include "Lista.h"
#include <locale.h>
#include "Filtr_adresu.h"
#include "Mieszkanie.h"
#include "interfejs.h"
#include "Filtr_miejsc_zainteresowania.h"
#include "Lista_cen.h"
#include "Wyszukiwarka mieszkań.h"
#include <Windows.h>

int main()
{
	std::locale::global(std::locale(""));
	setlocale(LC_CTYPE, "Polish");
	
	Lista_adresów la("Lista adresów.csv");
	Lista_cech lc("winda umeblowanie metraż.csv");
	Lista_miejsc_zainteresowania lmz("Miejsca zainteresowania.csv");
	Lista_pomieszczeń lp("Pomieszczenia.csv");
	Lista_cen* lcn;
	Lista_cen_wynajmu lcw("Ceny.csv");
	Lista_cen_kupna lck("Ceny.csv");

	Filtr_adresu fa;
	Filtr_cech fc;
	Filtr_miejsc_zainteresowania fmz;
	filtr_ceny fcm;
	Filtr_pomieszczeń fp;

	interfejs interf;
	Mieszkanie mieszkanie;

	interf.strona_1(&lcn,lck,lcw);
	interf.strona_2(la,fa, lc, fc, lmz,fmz,fp, fcm);
	la.filtr(fa);
	lc.filtr(fc);
	lmz.filtr(fmz);
	lp.filtr(fp);
	lcn->filtr(fcm);
	if (lcn->get_class() == &lcw)
	{
		Mieszkanie m(la.get_list(), lc.get_list(), lcn->get_list_w(), lmz.get_list(), lp.get_list());
		mieszkanie = m;
	}
	else if (lcn->get_class() == &lck)
	{
		Mieszkanie m(la.get_list(), lc.get_list(), lcn->get_list_k(), lmz.get_list(), lp.get_list());
		mieszkanie = m;
	}
	mieszkanie.search();
	if (lcn->get_class() == &lck)
	{
		mieszkanie.Print_kupno(la,lck.get_list_k(),lc,lmz,lp);
	}
	else if (lcn->get_class() == &lcw)
	{
		mieszkanie.Print_wynajem(la, lcw.get_list_w(),lc,lmz,lp);
	}
	ShellExecute(NULL, L"open", L"Wyniki.csv", NULL, NULL, SW_SHOWNORMAL);
}