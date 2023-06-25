#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <list>
class Adres
{
	int nr_budynku, ID;
	std::string Miejscowosc, Ulica;
public:
	Adres();
	Adres(std::string _miejscowosc, std::string _ulica, int _nr, int _id);
	friend std::ostream& operator<<(std::ostream& os, const Adres& _adres);
	Adres& operator=(const Adres& a);
	void set_city(std::string& s);
	void set_street(std::string& s);	
	std::string get_city();
	std::string get_street();
	int get_ID();
};

