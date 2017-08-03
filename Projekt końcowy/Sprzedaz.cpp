#include "Sprzedaz.h"

#include <iostream>
#include <ctime>
#include <cstdlib>

Sprzedaz::Sprzedaz(int id, int dzienS, int miesiacS, int rokS, Pojazd* poj, std::string stat)
{
	idSprzedazy = id;
	dzienSprzedania = dzienS;
	miesiacSprzedania = miesiacS;
	rokSprzedania = rokS;
	p = poj;
	stat = "DO SPRZEDANIA";
}

void Sprzedaz::pokazOferte()
{
	std::cout << "OFERTA NR " << idSprzedazy << std::endl;
	std::cout << "Data: " << dzienSprzedania << "-" << miesiacSprzedania << "-" << rokSprzedania << std::endl;
	p->IdNazwa();
}

void Sprzedaz::pokazOferte2()
{
	std::cout << "OFERTA NR " << idSprzedazy << std::endl;
	std::cout << "Data: " << dzienSprzedania << "-" << miesiacSprzedania << "-" << rokSprzedania << std::endl;
}

void Sprzedaz::licytacjaCene()
{
	std::cout << "Czy chcesz sie licytowac, czy wystarczy gratis? (0 - LICYTACJA, 1 - GRATIS)" << std::endl;
	int lic;
	std::cin >> lic;
	std::cin.get();
	if (lic == 0)
	{
		int proc = rand()%11;
		std::cout << "Moge zaproponowac: " << proc << "% rabatu" << std::endl;
		std::cout << "Czy chcesz sie licytowac dalej? (0-NIE, 1-TAK)" << std::endl;
		int dec1;
		std::cin >> dec1;
		std::cin.get();
		if (dec1 == 0)
		{
			std::cout << "Ok zostajemy przy rabacie " << proc << "%" << std::endl;
			std::cout << "Cena przed rabatem: " << p->getCena() << std::endl;
			p->setCena(p->getCena()*((100-proc)*0.01));
			std::cout << "Cena po rabacie: " << p->getCena() << std::endl;
			status = "SPRZEDANY";
			std::cout << "Pojazdd zostal sprzedany!!!" << std::endl;

		}
		else if (dec1 == 1)
		{
			int proc1 = rand()%11;
			if (proc1 <= proc)
			{
				std::cout << "NIESTETY NIE MOGE ZEJSC NIZEJ. Czy bierzesz po tej cenie? (0-NIE, 1-TAK)" << std::endl;
				int dec2;
				std::cin >> dec2;
				std::cin.get();
				if (dec2 == 0)
				{
					std::cout << "Dziekuje za wizyte. Zapraszamy ponownie!" << std::endl;
				}
				else if (dec2 == 1)
				{
					std::cout << "Ok zostajemy przy rabacie " << proc << "%" << std::endl;
					std::cout << "Cena przed rabatem: " << p->getCena() << std::endl;
					p->setCena(p->getCena()*((100-proc)*0.01));
					std::cout << "Cena po rabacie: " << p->getCena() << std::endl;
					status = "SPRZEDANY";
					std::cout << "Pojazd zostal sprzedany!!!" << std::endl;
				}
				else
				{
					std::cout << "Niepowaznie traktuje Pan licytacje. Koniec negocjacji" << std::endl;
				}
			}
			else
			{
				std::cout << "Ok niech bedzie rabat " << proc1 << "%" << std::endl;
				std::cout << "Czy bierzesz po tej cenie? (0-NIE, 1-TAK)" << std::endl;
				int dec2;
				std::cin >> dec2;
				std::cin.get();
				if (dec2 == 0)
				{
					std::cout << "Dziekuje za wizyte. Zapraszamy ponownie!" << std::endl;
				}
				else if (dec2 == 1)
				{
					std::cout << "Ok zostajemy przy rabacie " << proc1 << "%" << std::endl;
					std::cout << "Cena przed rabatem: " << p->getCena() << std::endl;
					p->setCena(p->getCena()*((100-proc1)*0.01));
					std::cout << "Cena po rabacie: " << p->getCena() << std::endl;
					status = "SPRZEDANY";
					std::cout << "Pojazd zostal sprzedany!!!" << std::endl;
				}
				else
				{
					std::cout << "Niepowaznie traktuje Pan licytacje. Koniec negocjacji" << std::endl;
				}
			}
		}
		else 
		{
		}
	}
	else if (lic == 1)
	{
		losujGratis();
	}
	else
	{
		std::cout << "NIE UMIESZ KULTURALNIE SIE TARGOWAC. BRAK ZNIZKI I GRATISU" << std::endl;
	}
}

void Sprzedaz::losujGratis()
{
	std::cout << "Czekaj wybieram gratis dla Ciebie..." << std::endl;
		int grat = rand()%3;
		switch(grat)
		{
		case 0:
			std::cout << "NAWIGACJA GPS" << std::endl;
			break;
		case 1:
			std::cout << "TANKOWANIE DO PELNA" << std::endl;
			break;
		case 2:
			std::cout << "MYJNIA + WOSKOWANIE" << std::endl;
			break;
		}
}

Sprzedaz::Sprzedaz()
{
	;
}

std::string Sprzedaz::getStatus()
{
	return status;
}

void Sprzedaz::setStatus(std::string status)
{
	this->status = status;
}

int Sprzedaz::getIdSprzedazy()
{
	return idSprzedazy;
}

void Sprzedaz::setIdSprzedazy(int idSprzedazy)
{
	this->idSprzedazy = idSprzedazy;
}

Pojazd& Sprzedaz::getPojazd()
{
	return *p;
}

Sprzedaz::~Sprzedaz()
{
	;
}


