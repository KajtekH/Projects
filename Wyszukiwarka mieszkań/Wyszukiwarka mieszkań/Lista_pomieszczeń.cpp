#include "Lista_pomieszcze�.h"

Lista_pomieszcze�::Lista_pomieszcze�(std::string const& file_name)
{
	CustomList<Pokoje> l;
	std::ifstream input_file(file_name);
	if (!input_file.is_open())
	{
		std::cout << "Blad pliku wejsciowego z list� pomieszcze�" << std::endl;
	}
	std::string line;
	int id = 1;
	while (std::getline(input_file, line))
	{
		int sypialnie;
		int �azienki;
		int ilo��;

		size_t data_end1 = line.find(";");
		size_t data_end2 = line.find(";", data_end1 + 1);
		if (data_end1 != std::string::npos && data_end1 != std::string::npos)
		{
			�azienki = std::stoi(line.substr(0, data_end1));
			sypialnie = std::stoi(line.substr(data_end1 + 1, data_end2 - data_end1 - 1));
			ilo�� = std::stoi(line.substr(data_end2 + 1));
			l.pushBack(Pokoje(�azienki, sypialnie, ilo��, id));
		}
		id++;
	}
	input_file.close();
	lista = l;
}

void Lista_pomieszcze�::read()
{
	lista.printList();
}

void Lista_pomieszcze�::read_f()
{
	f_lista.printList();
}

void Lista_pomieszcze�::filtr(Filtr_pomieszcze�& fp)
{
	for (int i = 0; i < lista.getSize(); i++)
	{
		Pokoje p = lista.findByPosition(i);
		if (p.get_ilo��() >= fp.get_min_ilo��() && (p.get_ilo��() <= fp.get_max_ilo�c() || fp.get_max_ilo�c() == -1) && p.get_�azienki() >= fp.get_�azienki() && p.get_sypialnie() >= fp.get_sypialnie())
		{
			f_lista.pushBack(p);
		}
	}
}

CustomList<Pokoje> Lista_pomieszcze�::get_list()
{
	return this->f_lista;
}

Pokoje Lista_pomieszcze�::ID_search(int i)
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
