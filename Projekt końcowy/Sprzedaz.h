#ifndef SPRZEDAZ
#define SPRZEDAZ

#include <vector>
#include <string>
#include "Pojazd.h"

class Sprzedaz
{
private:
	int idSprzedazy;
	int dzienSprzedania;
	int miesiacSprzedania;
	int rokSprzedania;
	std::string status; //sprzedany, niesprzedany, zarezerwowany
	Pojazd* p;

public:
	virtual void licytacjaCene();
	virtual void pokazOferte();
	virtual void pokazOferte2();
	virtual void losujGratis();
	Sprzedaz();
	Sprzedaz(int id, int dzienS, int miesiacS, int rokS, Pojazd* poj, std::string stat);
	virtual ~Sprzedaz();

	//akcesory
	int getIdSprzedazy();
	void setIdSprzedazy(int idSprzedazy);

	std::string getStatus();
	void setStatus(std::string status);

	Pojazd& getPojazd();
};

#endif