#include "interfejs.h"

void interfejs::strona_1(Lista_cen** wsk, Lista_cen_kupna& lck, Lista_cen_wynajmu& lcw)
{
	system("cls");
	std::cout << "Wyszukiwarka mieszka�" << std::endl << "1-kupno" << std::endl << "2-wynajem" << std::endl;
	//bool x;
	switch (_getch())
	{
	case '1':
		*wsk = &lck;
		//x = 1;
		//fcn.set_cena(x);
		system("cls");
		break;
	case '2':
		*wsk = &lcw;
		//x = 0;
		//fcn.set_cena(x);
		system("cls");
		break;
	}
}

void interfejs::strona_2(Lista_adres�w& la, Filtr_adresu& fa, Lista_cech& lc, Filtr_cech& fc, Lista_miejsc_zainteresowania& lmz, Filtr_miejsc_zainteresowania& fmz, Filtr_pomieszcze�& fp, filtr_ceny& fcn)
{
	while (end == 0)
	{
		system("cls");
		std::cout << "Wyszukiwarka mieszka�" << std::endl
			<< "Naci�nij 0 by wyszuka� mieszkanie lub edytuj filtry wyszukiwania      x-cofnij filtry" << std::endl
			<< "Filtry wyszukiwania:" << std::endl
			<< "1-Adres";
		if (fa.get_miejscowo��().getSize() == 1)
		{
			std::cout << "   (" << fa.get_miejscowo��().findByPosition(0) << ")";
		}
		else if (fa.get_miejscowo��().getSize() == 2)
		{
			std::cout << "   (" << fa.get_miejscowo��().findByPosition(0) << " / " << fa.get_miejscowo��().findByPosition(1) << ")";
		}
		else if (fa.get_miejscowo��().getSize() >= 3)
		{
			std::cout << "   (" << fa.get_miejscowo��().getSize() << " miasta)";
		}
		std::cout << std::endl;
		std::cout << "2-Cena";
		if (fcn.get_min() != 0 && fcn.get_max() == -1)
		{
			std::cout << "    (min - " << fcn.get_min() << " z�)";
		}
		else if (fcn.get_min() != 0 && fcn.get_max() != -1)
		{
			std::cout << "    (min - " << fcn.get_min() << " z�   max - " << fcn.get_max() << " z�)";
		}
		else if (fcn.get_min() == 0 && fcn.get_max() != -1)
		{
			std::cout << "    (max - " << fcn.get_max() << " z�)";
		}
		std::cout << std::endl;
		std::cout << "3-Pokoje";
		if (fp.get_�azienki() != 0 || fp.get_sypialnie() != 0)
		{
			std::cout << "    (ustawienia niestandardowe)";
		}
		else if (fp.get_min_ilo��() != 0 && fp.get_max_ilo�c() == -1)
		{
			std::cout << "    (minimalna ilo�c pomieszcze� - " << fp.get_min_ilo��() << ")";
		}
		else if (fp.get_min_ilo��() != 0 && fp.get_max_ilo�c() != -1)
		{
			std::cout << "    (Minimalna ilo�� pomieszcze� - " << fp.get_min_ilo��() << "  maksymalna ilo�� pomieszcze� - " << fp.get_max_ilo�c() << ")";
		}
		else if (fp.get_min_ilo��() == 0 && fp.get_max_ilo�c() != -1)
		{
			std::cout << "    (Maksymalna ilo�� pomieszcze� - " << fp.get_max_ilo�c() << ")";
		}
		std::cout << std::endl;
		std::cout << "4-Metra�";
		if (fc.get_metraz_min() != 0 && fc.get_metraz_max() == -1)
		{
			std::cout << "    (min = " << fc.get_metraz_min() << ")";
		}
		else if (fc.get_metraz_min() != 0 && fc.get_metraz_max() != -1)
		{
			std::cout << "     (min = " << fc.get_metraz_min() << "   max = " << fc.get_metraz_max() << ")";
		}
		else if (fc.get_metraz_min() == 0 && fc.get_metraz_max() != -1)
		{
			std::cout << "    (max = " << fc.get_metraz_max() << ")";
		}
		std::cout << std::endl;
		std::cout << "5-Miejsca zainteresowania";
		if (fmz.get_list().getSize() == 1)
		{
			std::cout << "    (" << fmz.get_list().findByPosition(0) << ")";
		}
		else if (fmz.get_list().getSize() == 2)
		{
			std::cout << "    (" << fmz.get_list().findByPosition(0) << " i " << fmz.get_list().findByPosition(1) << ")";
		}
		else if (fmz.get_list().getSize() > 2)
		{
			std::cout << "    (" << fmz.get_list().getSize() << " miejsca)";
		}
		std::cout << std::endl;
		std::cout << "6-Stan umeblowania";
		if (fc.get_emblowanie() == 0)
		{
			std::cout << "    (Nieumeblowane)";
		}
		else if (fc.get_emblowanie() == 1)
		{
			std::cout << "    (Umeblowane)";
		}
		std::cout << std::endl;
		std::cout << "7-Winda w budynku";
		if (fc.get_winda() == 0)
		{
			std::cout << "    (Nie)";
		}
		else if (fc.get_winda() == 1)
		{
			std::cout << "    (Tak)";
		}
		std::cout << std::endl;
		switch (_getch())
		{
		case '0':
			system("cls");
			end = 1;
			break;
		case '1':
			system("cls");
			adres_1(la, fa);
			break;
		case '2':
			system("cls");
			cena_min(fcn);
			break;
		case '3':
			system("cls");
			pokoje(fp);
			break;
		case'4':
			system("cls");
			metra�_min(fc);
			break;
		case '5':
			system("cls");
			miejsca(lmz, fmz);
			break;
		case'6':
			system("cls");
			umeblowanie(fc);
			break;
		case'7':
			system("cls");
			winda(fc);
			break;
		case'x':
			Filtr(fa, fc, fmz, fp);
			system("cls");
			break;
		}
	}
}

void interfejs::adres_1(Lista_adres�w& la, Filtr_adresu& fa)
{
	CustomList<std::string> copy(fa.get_miejscowo��());
	fa.clear_miejscowo�ci();
	CustomList<std::string> int_miejscowo��;
	while (true)
	{
		system("cls");
		std::cout << "Wybierz dost�pn� miejscowo��:           z-Dalej     x-Powr�t" << std::endl;
		for (int i = 0; i < la.get_cities().getSize(); i++)
		{
			std::cout << i + 1 << " - " << la.get_cities().findByPosition(i);
			if (int_miejscowo��.contains(std::to_string(i + 1)))
			{
				std::cout << "    X";
			}
			std::cout << std::endl;
		}
		std::string z;
		std::cin >> z;
		if (z == "x")
		{
			fa.set_copy(copy);
			break;
		}
		else if (z == "z")
		{
			if (int_miejscowo��.getSize() == 0)
				break;
			for (int i = 0; i < int_miejscowo��.getSize(); i++)
			{
				int id = std::stoi(int_miejscowo��.findByPosition(i));
				fa.set_miejscowo��(la.get_cities().findByPosition(id - 1));
			}
			adres_2(la, fa);
			break;
		}
		else if (int_miejscowo��.contains(z))
		{
			int_miejscowo��.remove(z);
		}
		else
		{
			int_miejscowo��.pushBack(z);
		}
	}
}

void interfejs::adres_2(Lista_adres�w& la, Filtr_adresu& fa)
{
	fa.clear_ulice();
	CustomList<Adres> ad = la.get_Firstlist();
	CustomList<std::string> miejscowo�ci(fa.get_miejscowo��());
	CustomList<std::string> ulice;
	CustomList<std::string> int_ulice;
	for (int i = 0; i < ad.getSize(); i++)
	{
		Adres a = ad.findByPosition(i);
		if (miejscowo�ci.contains(a.get_city()) && !ulice.contains(a.get_street()))
		{
			ulice.pushBack(a.get_street());
		}
	}
	while (true)
	{
		system("cls");
		std::cout << "Wybierz dost�pne ulice:           z-Dalej" << std::endl;
		for (int i = 0; i < ulice.getSize(); i++)
		{
			std::cout << i + 1 << " - " << ulice.findByPosition(i);
			if (int_ulice.contains(std::to_string(i + 1)))
			{
				std::cout << "    X";
			}
			std::cout << std::endl;
		}

		std::string z;
		std::cin >> z;
		if (z == "x")
		{
			break;
		}
		else if (z == "z")
		{
			if (int_ulice.getSize() == 0)
				break;
			for (int i = 0; i < int_ulice.getSize(); i++)
			{
				int id = std::stoi(int_ulice.findByPosition(i));
				fa.set_ulica(ulice.findByPosition(id - 1));
			}
			break;
		}
		else if (int_ulice.contains(z))
		{
			int_ulice.remove(z);
		}
		else
		{
			int_ulice.pushBack(z);
		}
	}
}

void interfejs::metra�_min(Filtr_cech& fc)
{
	int copy = fc.get_metraz_min();
	fc.set_metraz_min(0);
	std::string choice;
	std::cout << "Podaj minimalny metra�           z-pomi�     x-Powr�t" << std::endl;
	std::cin >> choice;
	if (choice == "z")
	{
		system("cls");
		metra�_max(fc);
		return;
	}
	else if (choice == "x")
	{
		fc.set_metraz_min(copy);
		return;
	}
	fc.set_metraz_min(std::stoi(choice));
	metra�_max(fc);
}

void interfejs::metra�_max(Filtr_cech& fc)
{
	int copy = fc.get_metraz_max();
	fc.set_metraz_max(-1);
	system("cls");
	std::string choice;
	std::cout << "Podaj maksymalny metra�:           z-pomi�" << std::endl;
	std::cin >> choice;
	if (choice == "z")
	{
		return;
	}
	fc.set_metraz_max(std::stoi(choice));
}

void interfejs::umeblowanie(Filtr_cech& fc)
{
	std::cout << " Wybierz stan umeblowania:     z-ustawienia domy�lne      x-Powr�t" << std::endl
		<< "0 - Nieumeblowany" << std::endl
		<< "1 - Umeblowany" << std::endl;
	switch (_getch())
	{
	case'x':
		break;
	case'z':
		fc.set_umeblowanie(-1);
		break;
	case'0':
		fc.set_umeblowanie(0);
		break;
	case'1':
		fc.set_umeblowanie(1);
		break;
	}

}

void interfejs::winda(Filtr_cech& fc)
{
	std::cout << "Czy budynek ma mie� wind�?     z-ustawienia domy�lne      x-Powr�t" << std::endl
		<< "0 - nie" << std::endl
		<< "1 - tak" << std::endl;
	switch (_getch())
	{
	case'x':
		break;
	case'z':
		fc.set_winda(-1);
		break;
	case'0':
		fc.set_winda(0);
		break;
	case'1':
		fc.set_winda(1);
		break;
	}
}

void interfejs::miejsca(Lista_miejsc_zainteresowania& lmz, Filtr_miejsc_zainteresowania& fmz)
{
	std::string choice;
	CustomList<std::string> miejsca;
	CustomList<std::string> int_miejsca;
	CustomList<Miejsca_zainteresowania> mz;
	CustomList<std::string> copy(fmz.get_list());
	fmz.clear();
	mz = lmz.get_Firstlist();
	while (true)
	{
		system("cls");
		std::cout << "Wybierz dost�pne miejsca zainteresowania:           z-Dalej     x-Powr�t" << std::endl;
		for (int i = 0; i < mz.getSize(); i++)
		{
			Miejsca_zainteresowania m = mz.findByPosition(i);
			for (int j = 0; j < m.get_list().getSize(); j++)
			{
				std::string miejsce = m.get_list().findByPosition(j);
				if (!miejsca.contains(miejsce))
				{
					miejsca.pushBack(miejsce);
				}
			}
		}
		for (int i = 0; i < miejsca.getSize(); i++)
		{
			std::cout << i + 1 << " - " << miejsca.findByPosition(i);
			if (int_miejsca.contains(std::to_string(i + 1)))
			{
				std::cout << "    X";
			}
			std::cout << std::endl;
		}
		std::cin >> choice;
		if (choice == "z")
		{
			if (int_miejsca.getSize() == 0)
				break;
			for (int i = 0; i < int_miejsca.getSize(); i++)
			{
				int id = std::stoi(int_miejsca.findByPosition(i));
				fmz.set_miejsce(miejsca.findByPosition(id - 1));
			}
			break;
		}
		if (choice == "x")
		{
			fmz.set_list(copy);
			break;
		}
		int_miejsca.pushBack(choice);
	}
}

void interfejs::pokoje(Filtr_pomieszcze�& fp)
{
	int copy = fp.get_min_ilo��();
	fp.set_min_ilo��(0);
	std::string choice;
	std::cout << "Podaj minimaln� ilo�� pomieszcze�           z-pomi�     x-Powr�t" << std::endl;
	std::cin >> choice;
	if (choice == "z")
	{
		pokoje_max(fp);
		return;
	}
	else if (choice == "x")
	{
		fp.set_min_ilo��(copy);
		return;
	}
	fp.set_min_ilo��(std::stoi(choice));
	pokoje_max(fp);
}

void interfejs::pokoje_max(Filtr_pomieszcze�& fp)
{
	fp.set_max_ilo��(-1);
	std::string choice;
	while (true)
	{
		system("cls");
		std::cout << "Podaj maksymaln� ilo�� pomieszcze�           z-zatwierd�     c-ustawienia zaawansowane" << std::endl;
		std::cin >> choice;
		if (choice == "z")
		{
			return;
		}
		else if (choice == "c")
		{
			�azienki(fp);
			return;
		}
		fp.set_max_ilo��(std::stoi(choice));
	}
}

void interfejs::�azienki(Filtr_pomieszcze�& fp)
{
	fp.set_�azienki(0);
	system("cls");
	std::string choice;
	std::cout << "Podaj minimaln� ilo�� �azienek           z-sypialnie" << std::endl;
	std::cin >> choice;
	if (choice == "z")
	{
		sypialnie(fp);
		return;
	}
	fp.set_�azienki(std::stoi(choice));
	sypialnie(fp);
}

void interfejs::sypialnie(Filtr_pomieszcze�& fp)
{
	fp.set_sypialnie(0);
	system("cls");
	std::string choice;
	std::cout << "Podaj minimaln� ilo�� sypialni           z-pomi�" << std::endl;
	std::cin >> choice;
	if (choice == "z")
	{
		return;
	}
	fp.set_sypialnie(std::stoi(choice));
}

void interfejs::Filtr(Filtr_adresu& fa, Filtr_cech& fc, Filtr_miejsc_zainteresowania& fmz, Filtr_pomieszcze�& fp)
{
	fa.clear_miejscowo�ci();
	fa.clear_ulice();
	fmz.clear();
	fc.set_metraz_max(-1);
	fc.set_metraz_min(0);
	fc.set_umeblowanie(-1);
	fc.set_winda(-1);
	fp.set_�azienki(0);
	fp.set_sypialnie(0);
	fp.set_min_ilo��(0);
	fp.set_max_ilo��(-1);
}

void interfejs::cena_min(filtr_ceny& fcn)
{
	int copy = fcn.get_min();
	fcn.set_min(0);
	std::string choice;
	std::cout << "Podaj minimaln� cen�           z-Dalej     x-Powr�t" << std::endl;
	std::cin >> choice;
	if (choice == "z")
	{
		system("cls");
		cena_max(fcn);
	}
	else if (choice == "x")
	{
		fcn.set_min(copy);
		return;
	}
	else
	{
		fcn.set_min(std::stoi(choice));
		cena_max(fcn);
	}
}

void interfejs::cena_max(filtr_ceny& fcn)
{
	system("cls");
	std::string choice;
	std::cout << "Podaj maksymaln� cen�           z-Dalej" << std::endl;
	std::cin >> choice;
	if (choice == "z")
	{
		fcn.set_max(-1);
		system("cls");
		return;
	}
	else
	{
		fcn.set_max(std::stoi(choice));
		return;
	}
}