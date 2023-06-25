#pragma once
#include <iostream>
#include <fstream>
class Cena
{
protected:
	int warto��, ID;
public:
	virtual int get_warto��() = 0;

	virtual int get_id() = 0;

	friend std::ostream& operator<<(std::ostream& os, Cena const& data);

	virtual void print(std::ostream& os) const = 0;
};



