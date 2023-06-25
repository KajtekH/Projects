#pragma once
#include <iostream>
#include <fstream>
class Cena
{
protected:
	int wartoœæ, ID;
public:
	virtual int get_wartoœæ() = 0;

	virtual int get_id() = 0;

	friend std::ostream& operator<<(std::ostream& os, Cena const& data);

	virtual void print(std::ostream& os) const = 0;
};



