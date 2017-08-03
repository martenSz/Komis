#ifndef EDYCJA
#define EDYCJA

#include "Sprzedaz.h"

class Edycja
{
public:
	Edycja();
	virtual ~Edycja();
	void zmien(std::vector<Sprzedaz>& lista);
	void usun(std::vector<Sprzedaz>& lista);
};


#endif