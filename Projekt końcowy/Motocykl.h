#ifndef MOTOCYKL
#define MOTOCYKL

#include "Pojazd.h"

class Motocykl : public Pojazd
{
private:
	std::string rodzajNapedu;
public:
	Motocykl(std::string nazwaPlik);
	Motocykl();
	virtual ~Motocykl();
	void wymianaNapedu();
	void przeglad();
	void jazdaProbna();
	void danePojazdu();
	void IdNazwa();

	friend std::ostream& operator<<(std::ostream& out, Motocykl& x);

	std::string getRodzajNapedu();
	void setRodzajNapedu(std::string rodzajNapedu);
};

#endif