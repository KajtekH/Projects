#include "Lista_pomieszczeñ.h"

Lista_pomieszczeñ::Lista_pomieszczeñ(std::string const& file_name)
{
	CustomList<Pokoje> l;
	std::ifstream input_file(file_name);
	if (!input_file.is_open())
	{
		std::cout << "Blad pliku wejsciowego z list¹ pomieszczeñ" << std::endl;
	}
	std::string line;
	int id = 1;
	while (std::getline(input_file, line))
	{
		int sypialnie;
		int ³azienki;
		int iloœæ;

		size_t data_end1 = line.find(";");
		size_t data_end2 = line.find(";", data_end1 + 1);
		if (data_end1 != std::string::npos && data_end1 != std::string::npos)
		{
			³azienki = std::stoi(line.substr(0, data_end1));
			sypialnie = std::stoi(line.substr(data_end1 + 1, data_end2 - data_end1 - 1));
			iloœæ = std::stoi(line.substr(data_end2 + 1));
			l.pushBack(Pokoje(³azienki, sypialnie, iloœæ, id));
		}
		id++;
	}
	input_file.close();
	lista = l;
}

void Lista_pomieszczeñ::read()
{
	lista.printList();
}

void Lista_pomieszczeñ::read_f()
{
	f_lista.printList();
}

void Lista_pomieszczeñ::filtr(Filtr_pomieszczeñ& fp)
{
	for (int i = 0; i < lista.getSize(); i++)
	{
		Pokoje p = lista.findByPosition(i);
		if (p.get_iloœæ() >= fp.get_min_iloœæ() && (p.get_iloœæ() <= fp.get_max_iloœc() || fp.get_max_iloœc() == -1) && p.get_³azienki() >= fp.get_³azienki() && p.get_sypialnie() >= fp.get_sypialnie())
		{
			f_lista.pushBack(p);
		}
	}
}

CustomList<Pokoje> Lista_pomieszczeñ::get_list()
{
	return this->f_lista;
}

Pokoje Lista_pomieszczeñ::ID_search(int i)
{
	Pokoje a;
	for (int j = 0; j < f_lista.getSize(); j++)
	{
		a = f_lista.findByPosition(j);
		if (a.get_id() == i)
		{
			return a;
		}
	}
}
