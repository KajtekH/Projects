#include "Mieszkanie.h"

Mieszkanie::Mieszkanie() {};
Mieszkanie::Mieszkanie(CustomList<Adres> la, CustomList<Cechy> lc, CustomList<Cena_kupna> lcn, CustomList<Miejsca_zainteresowania> lmz, CustomList<Pokoje>lp)
{
	for (int i = 0; i < la.getSize(); i++)
	{
		Adres a = la.findByPosition(i);
		adres_ID.pushBack(a.get_ID());
	}
	for (int i = 0; i < lc.getSize(); i++)
	{
		Cechy c = lc.findByPosition(i);
		cechy_ID.pushBack(c.get_ID());
	}
	for (int i = 0; i < lcn.getSize(); i++)
	{
		Cena_kupna ck = lcn.findByPosition(i);
		ceny_ID.pushBack(ck.get_id());
	}
	for (int i = 0; i < lmz.getSize(); i++)
	{
		Miejsca_zainteresowania mz = lmz.findByPosition(i);
		miejsca_ID.pushBack(mz.get_id());
	}
	for (int i = 0; i < lp.getSize(); i++)
	{
		Pokoje p = lp.findByPosition(i);
		pomieszczenia_ID.pushBack(p.get_id());
	}
}
Mieszkanie::Mieszkanie(CustomList<Adres> la, CustomList<Cechy> lc, CustomList<Cena_wynajmu> lcn, CustomList<Miejsca_zainteresowania> lmz, CustomList<Pokoje> lp)
{
	for (int i = 0; i < la.getSize(); i++)
	{
		Adres a = la.findByPosition(i);
		adres_ID.pushBack(a.get_ID());
	}
	for (int i = 0; i < lc.getSize(); i++)
	{
		Cechy c = lc.findByPosition(i);
		cechy_ID.pushBack(c.get_ID());
	}
	for (int i = 0; i < lcn.getSize(); i++)
	{
		Cena_wynajmu ck = lcn.findByPosition(i);
		ceny_ID.pushBack(ck.get_id());
	}
	for (int i = 0; i < lmz.getSize(); i++)
	{
		Miejsca_zainteresowania mz = lmz.findByPosition(i);
		miejsca_ID.pushBack(mz.get_id());
	}
	for (int i = 0; i < lp.getSize(); i++)
	{
		Pokoje p = lp.findByPosition(i);
		pomieszczenia_ID.pushBack(p.get_id());
	}
}

Mieszkanie& Mieszkanie::operator=(const Mieszkanie& m)
{
	this->adres_ID = m.adres_ID;
	this->cechy_ID = m.cechy_ID;
	this->ceny_ID = m.ceny_ID;
	this->miejsca_ID = m.miejsca_ID;
	this->pomieszczenia_ID = m.pomieszczenia_ID;
	this->finish_list = m.finish_list;
	return *this;
}
void Mieszkanie::search()
{
	CustomList<int> min_list;
	int min_size = std::min(adres_ID.getSize(), ceny_ID.getSize());
	if (adres_ID.getSize() == min_size)
	{
		min_list = adres_ID;
	}
	else if (ceny_ID.getSize() == min_size)
	{
		min_list = cechy_ID;
	}

	for (int i = 0; i < min_size; i++)
	{
		int a = min_list.findByPosition(i);
		if (adres_ID.contains(a) && cechy_ID.contains(a) && ceny_ID.contains(a) && miejsca_ID.contains(a) && pomieszczenia_ID.contains(a))
		{
			finish_list.pushBack(a);
		}
	}
}

void Mieszkanie::read()
{
	finish_list.printList();
}

CustomList<int> Mieszkanie::get_list()
{
	return this->finish_list;
}

void Mieszkanie::Print_kupno(Lista_adresów la, CustomList<Cena_kupna> lck, Lista_cech lc, Lista_miejsc_zainteresowania lmz, Lista_pomieszczeñ lp)
{
	std::ofstream output("Wyniki.csv");
	{
		Cena_kupna ck;
		output << "Miejscowoœæ;Ulica;nr mieszkania;cena;pokoje;³azienki;sypialnie;metra¿;umeblowany;winda;pobliskie obiekty" << std::endl;
		for (int i = 0; i < this->get_list().getSize(); i++)
		{
			for (int j = 0; j < lck.getSize(); j++)
			{
				ck = lck.findByPosition(j);
				if (ck.get_id() == this->get_list().findByPosition(i))
				{
					break;
				}
			}
			output << la.ID_search(this->get_list().findByPosition(i)) << ck << lp.ID_search(this->get_list().findByPosition(i)) << lc.ID_search(this->get_list().findByPosition(i)) << lmz.ID_search(this->get_list().findByPosition(i)) << std::endl;
		}
	}
	system("cls");
	std::cout << std::endl << std::endl << "Pomyœlnie wyeksportowano wyniki do pliku Wyniki.csv" << std::endl << std::endl;
}
void Mieszkanie::Print_wynajem(Lista_adresów la, CustomList<Cena_wynajmu> lck, Lista_cech lc, Lista_miejsc_zainteresowania lmz, Lista_pomieszczeñ lp)
{
	std::ofstream output("Wyniki.csv");
	{
		Cena_wynajmu ck;
		output << "Miejscowoœæ;Ulica;nr mieszkania;cena;pokoje;sypialnie;³azienki;metra¿;umeblowany;winda;pobliskie obiekty" << std::endl;
		for (int i = 0; i < this->get_list().getSize(); i++)
		{
			for (int j = 0; j < lck.getSize(); j++)
			{
				ck = lck.findByPosition(j);
				if (ck.get_id() == i)
				{
					break;
				}
			}
			output << la.ID_search(this->get_list().findByPosition(i)) << ck << lp.ID_search(this->get_list().findByPosition(i)) << lc.ID_search(this->get_list().findByPosition(i)) << lmz.ID_search(this->get_list().findByPosition(i)) << std::endl;
		}
	}
	system("cls");
	std::cout << std::endl << std::endl << "Pomyœlnie wyeksportowano wyniki do pliku Wyniki.csv" << std::endl << std::endl;
}