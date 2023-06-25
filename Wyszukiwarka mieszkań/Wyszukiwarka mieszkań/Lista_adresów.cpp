#include "Lista_adresów.h"

Lista_adresów::Lista_adresów(std::string const& file_name)
{
	CustomList<Adres> l;
	CustomList<std::string> miejsc;
	std::ifstream input_file(file_name);
	if (!input_file.is_open())
	{
		std::cout << "Blad pliku wejsciowego z lista adresów" << std::endl;
	}
	std::string line;
	int id = 1;
	while (std::getline(input_file, line))
	{
		std::string miejscowosc;
		std::string ulica;
		int nr;

		size_t data_end1 = line.find(";");
		size_t data_end2 = line.find(";", data_end1 + 1);
		if (data_end1 != std::string::npos && data_end1 != std::string::npos)
		{
			miejscowosc = line.substr(0, data_end1);
			ulica = line.substr(data_end1 + 1, data_end2 - data_end1 - 1);
			nr = std::stof(line.substr(data_end2 + 1));
			l.pushBack(Adres(miejscowosc, ulica, nr, id));
			if (!miejsc.contains(miejscowosc))
			{
				miejsc.pushBack(miejscowosc);
			}
		}
		id++;
	}
	input_file.close();
	lista = l;
	miejscowoœci = miejsc;
}

void Lista_adresów::read()
{
	lista.printList();
}

void Lista_adresów::read_f()
{
	f_lista.printList();
}

void Lista_adresów::read_m()
{
	miejscowoœci.printList();
}

void Lista_adresów::filtr(Filtr_adresu& Fa)
{
	for (int i = 0; i < lista.getSize(); i++)
	{
		Adres a = lista.findByPosition(i);
		if ((Fa.get_miejscowoœæ().contains(a.get_city()) || Fa.get_miejscowoœæ().getSize() == 0) && (Fa.get_ulica().contains(a.get_street()) || Fa.get_ulica().getSize() == 0))
		{
			f_lista.pushBack(lista.findByPosition(i));
		}
	}
}

CustomList<Adres> Lista_adresów::get_list()
{
	return f_lista;
}

CustomList<Adres> Lista_adresów::get_Firstlist()
{
	return lista;
}

CustomList<std::string> Lista_adresów::get_cities()
{
	return this->miejscowoœci;
}

Adres Lista_adresów::ID_search(int i)
{
	Adres a;
	for (int j = 0; j < f_lista.getSize(); j++)
	{
		a = f_lista.findByPosition(j);
		if (a.get_ID() == i)
		{
			return a;
		}
	}
}