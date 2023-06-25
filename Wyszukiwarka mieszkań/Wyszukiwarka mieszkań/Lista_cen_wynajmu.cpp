#include "Lista_cen_wynajmu.h"

Lista_cen_wynajmu::Lista_cen_wynajmu() {};
Lista_cen_wynajmu::Lista_cen_wynajmu(std::string const& file_name)
{
	CustomList<Cena_wynajmu> l_w;
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
			cena = std::stoi(line.substr(data_end1 + 1, data_end2 - data_end1 - 1));
			l_w.pushBack(Cena_wynajmu(cena, id));
		}
		id++;
	}
	input_file.close();
	lista = l_w;
}
Lista_cen_wynajmu::~Lista_cen_wynajmu()
{
	this->wsk = nullptr;
}
 void Lista_cen_wynajmu::filtr(filtr_ceny& fcn)
{
	for (int i = 0; i < lista.getSize(); i++)
	{
		wsk = &lista.findByPosition(i);
		if (wsk->get_wartoœæ() >= fcn.get_min() && (wsk->get_wartoœæ() <= fcn.get_max() || fcn.get_max() == -1))
		{
			f_lista.pushBack(Cena_wynajmu(wsk->get_wartoœæ(), wsk->get_id()));
		}
	}
}

 Lista_cen_wynajmu* Lista_cen_wynajmu::get_class()
{
	return this;
}

 CustomList<Cena_wynajmu> Lista_cen_wynajmu::get_list_w()
{
	return this->f_lista;
}

 CustomList<Cena_kupna> Lista_cen_wynajmu::get_list_k()
{
	CustomList<Cena_kupna> w;
	return w;
}