#include "Cechy.h"

Cechy::Cechy() {};

Cechy::Cechy(bool _winda, bool _umeblowanie, int _metraz, int _ID) :
	winda(_winda),
	umeblowanie(_umeblowanie),
	metraz(_metraz),
	ID(_ID) {};

bool Cechy::get_elevator()
{
	return winda;
}

bool Cechy::get_furnishings()
{
	return umeblowanie;
}

int Cechy::get_size()
{
	return metraz;
}

int Cechy::get_ID()
{
	return ID;
}

std::ostream& operator<<(std::ostream& os, const Cechy& _mieszkanie)
{
	os << _mieszkanie.metraz << ";";
	if (_mieszkanie.umeblowanie == 1)
	{
		os << "TAK;";
	}
	else
	{
		os << "NIE;";
	}
	if (_mieszkanie.winda == 1)
	{
		os << "TAK;";
	}
	else
	{
		os << "NIE;";
	}
	return os;
}

Cechy& Cechy::operator=(const Cechy& c)
{
	this->ID = c.ID;
	this->metraz = c.metraz;
	this->umeblowanie = c.umeblowanie;
	this->winda = c.winda;
	return *this;
}