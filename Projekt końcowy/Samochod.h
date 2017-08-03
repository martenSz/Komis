#ifndef SAMOCHOD
#define SAMOCHOD

#include "Pojazd.h"

class Samochod : public Pojazd
{
private:
	int liczbaDrzwi;
	std::string typ; //sedan,hatchback itd
	int pojemnoscBagaznika;
public:
	Samochod(std::string nazwaPlik);
	Samochod();
	virtual ~Samochod();
	void rozlozDach(); 
	void otworzBagaznik(); 
	void otworzMaske(); 
	void wsiadzDoSamochodu(); 
	void jazdaProbna();
	void danePojazdu();
	void IdNazwa();

	friend std::ostream& operator<<(std::ostream& out, Samochod& x);

	int getLibczaDrzwi();
	void setLiczbaDrzwi(int liczbaDrzwi);

	std::string getTyp();
	void setTyp(std::string typ);

	int getPojemnoscBagaznika();
	void setPojemnoscBagaznika(int pojemnoscBagaznika);
};

#endif