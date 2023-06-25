#include "Lista_cen_kupna.h"

Lista_cen_kupna::~Lista_cen_kupna()
{
	this->wsk = nullptr;
}
Lista_cen_kupna::Lista_cen_kupna(std::string const& file_name)
{
	CustomList<Cena_kupna> l_k;
	std::ifstream input_file(file_name);
	if (!input_file.is_open())
	{
		std::cout << "Blad pliku wejsciowego z list¹ cen" << std::endl;
	}
	std::string line;
	int id = 1;
	while (std::getline(input_file, line))
	{
		int cena;

		size_t data_end1 = line.find(";");
		size_t data_end2 = line.find(";", data_end1 + 1);
		if (data_end1 != std::string::npos && data_end1 != std::string::npos)
		{
			cena = std::stoi(line.substr(0, data_end1));
			l_k.pushBack(Cena_kupna(cena, id));
		}
		id++;
	}
	input_file.close();
	lista = l_k;
}

Lista_cen_kupna::Lista_cen_kupna() {};

void Lista_cen_kupna::filtr(filtr_ceny& fcn)
{
	for (int i = 0; i < lista.getSize(); i++)
	{
		wsk = &lista.findByPosition(i);
		if (wsk->get_wartoœæ() >= fcn.get_min() && (wsk->get_wartoœæ() <= fcn.get_max() || fcn.get_max() == -1))
		{
			f_lista.pushBack(Cena_kupna(wsk->get_wartoœæ(), wsk->get_id()));
		}
	}
}

Lista_cen_kupna* Lista_cen_kupna::get_class()
{
	return this;
}

CustomList<Cena_kupna> Lista_cen_kupna::get_list_k()
{
	return this->f_lista;
}

CustomList<Cena_wynajmu> Lista_cen_kupna::get_list_w()
{
	CustomList<Cena_wynajmu> w;
	return w;
}