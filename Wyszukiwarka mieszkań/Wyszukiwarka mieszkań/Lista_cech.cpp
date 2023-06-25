#include "Lista_cech.h"

Lista_cech::Lista_cech(std::string const& file_name)
{
	CustomList<Cechy> l;
	std::ifstream input_file(file_name);
	if (!input_file.is_open())
	{
		std::cout << "Blad pliku wejsciowego z list¹ cech" << std::endl;
	}
	std::string line;
	int id = 1;
	while (std::getline(input_file, line))
	{
		bool winda = 0;
		bool umeblowanie = 0;
		int metra¿;

		size_t data_end1 = line.find(";");
		size_t data_end2 = line.find(";", data_end1 + 1);
		if (data_end1 != std::string::npos && data_end1 != std::string::npos)
		{
			if (line.substr(0, data_end1) == "TAK")
			{
				winda = 1;
			}
			if (line.substr(data_end1 + 1, data_end2 - data_end1 - 1) == "TAK")
			{
				umeblowanie = 1;
			}
			metra¿ = std::stoi(line.substr(data_end2 + 1));
			l.pushBack(Cechy(winda, umeblowanie, metra¿, id));
		}
		id++;
	}
	input_file.close();
	lista = l;
}

void Lista_cech::read()
{
	lista.printList();
}

void Lista_cech::read_f()
{
	f_lista.printList();
}

void Lista_cech::filtr(Filtr_cech& F)
{
	for (int i = 0; i < lista.getSize(); i++)
	{
		Cechy a = lista.findByPosition(i);
		if ((a.get_elevator() == F.get_winda() || F.get_winda() == -1) && (a.get_furnishings() == F.get_emblowanie() || F.get_emblowanie() == -1) && a.get_size() >= F.get_metraz_min() && (a.get_size() <= F.get_metraz_max() || F.get_metraz_max() == -1))
		{
			f_lista.pushBack(lista.findByPosition(i));
		}
	}
}

CustomList<Cechy> Lista_cech::get_list()
{
	return f_lista;
}

Cechy Lista_cech::ID_search(int i)
{
	Cechy a;
	for (int j = 0; j < f_lista.getSize(); j++)
	{
		a = f_lista.findByPosition(j);
		if (a.get_ID() == i)
		{
			return a;
		}
	}
}