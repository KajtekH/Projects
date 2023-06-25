#include "Cena.h"

std::ostream& operator<<(std::ostream& os, Cena const& data)
{
	data.print(os);
	return os;
}