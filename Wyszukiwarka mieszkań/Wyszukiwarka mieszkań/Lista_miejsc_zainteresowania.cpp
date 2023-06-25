#include "Lista_miejsc_zainteresowania.h"

Lista_miejsc_zainteresowania::Lista_miejsc_zainteresowania(std::string const file_name)
{
	CustomList<Miejsca_zainteresowania> l;
	std::ifstream input_file(file_name);
	if (!input_file.is_open())
	{
		std::cout << "Blad pliku wejsciowego z listê miejsc" << std::endl;
	}
	std::string line;
	int id = 1;
	while (std::getline(input_file, line))
	{
		CustomList<std::string> miejsca;
		std::stringstream ss(line);
		std::string miejsce;
		while (std::getline(ss, miejsce, ';'))
		{
			miejsca.pushBack(miejsce);
		}
		l.pushBack(Miejsca_zainteresowania(miejsca, id));
		id++;
	}
	input_file.close();
	lista = l;
}

void Lista_miejsc_zainteresowania::read()
{
	lista.printList();
}

void Lista_miejsc_zainteresowania::read_f()
{
	f_lista.printList();
}

CustomList<Miejsca_zainteresowania> Lista_miejsc_zainteresowania::get_list()
{
	return this->f_lista;
}

CustomList<Miejsca_zainteresowania> Lista_miejsc_zainteresowania::get_Firstlist()
{
	return this->lista;
}

void Lista_miejsc_zainteresowania::filtr(Filtr_miejsc_zainteresowania& fmz)
{
	CustomList<std::string> list = fmz.get_list();
	if (list.getSize() == 0)
	{
		this->f_lista = this->lista;
	}
	else
	{
		for (int i = 0; i < lista.getSize(); i++)
		{
			Miejsca_zainteresowania a = lista.findByPosition(i);
			if (a.get_list().containsAll(list))
			{
				f_lista.pushBack(a);
			}
		}
	}
}

Miejsca_zainteresowania Lista_miejsc_zainteresowania::ID_search(int i)
{
	Miejsca_zainteresowania a;
	for (int j = 0; j < f_lista.getSize(); j++)
	{
		a = f_lista.findByPosition(j);
		if (a.get_id() == i)
		{
			return a;
		}
	}
}
