#include "Edycja.h"

void Edycja::zmien(std::vector<Sprzedaz>& lista)
{
	try
	{
		std::cout << "Podaj numer oferty, ktora chcesz edytowac: " << std::endl;
		int nr;
		std::cin >> nr;
		std::cin.get();
		if (nr >= lista.size() || nr <= 0)
		{
			std::string err = "BRAK OFERTY O PODANYM NUMERZE";
			throw err;
		}

		std::cout << "Podaj nowa nazwe pojazdu: " << std::endl;
		std::string n_nazwa; // n - nowa
		getline(std::cin, n_nazwa);
		
		for (int i = 0; i < n_nazwa.length(); i++)
		{
			if (n_nazwa[i] >= '0' && n_nazwa[i] <= '9')
			{
				std::string err = "NIEWLASCIWA NAZWA POJAZDU";
				throw err;
			}
		}
		lista[nr-1].getPojazd().setNazwa(n_nazwa);

		std::cout << "Podaj nowy przebieg pojazdu: " << std::endl;
		long n_przebieg;
		std::cin >> n_przebieg;
		std::cin.get();
		if(n_przebieg < lista[nr-1].getPojazd().getPrzebieg())
		{
			std::string err = "PRZEBIEG NIE MOZE BYC NIZSZY OD POPRZEDNIEGO";
			throw err;
		}
		lista[nr-1].getPojazd().setPrzebieg(n_przebieg);

		std::cout << "Podaj nowa cene samochodu: " << std::endl;
		double n_cena;
		std::cin >> n_cena;
		std::cin.get();
		if(n_cena < lista[nr-1].getPojazd().getCena()*0.75)
		{
			std::string err = "ZA NISKA CENA, NIE OPLACA NAM SIE SPRZEDAC PO TAKIEJ CENIE";
			throw err;
		}
		lista[nr-1].getPojazd().setCena(n_cena);
	}
	catch(std::string err)
	{
		std::cout << err << std::endl;
		std::cout << "Blad edycji" << std::endl;
		return;
	}
}

void Edycja::usun(std::vector<Sprzedaz>& lista)
{
		try
	{
		std::cout << "Podaj numer oferty, ktora chcesz usunac" << std::endl;
		int nr;
		std::cin >> nr;
		std::cin.get();
		if (nr >= lista.size() || nr < 0)
		{
			std::string err = "BRAK OFERTY O PODANYM NUMERZE";
			throw err;
		}

		lista.erase(lista.begin() + nr - 1);
	}
	catch(std::string err)
	{
		std::cout << err << std::endl;
		std::cout << "Blad edycji" << std::endl;
		return;
	}
}

Edycja::Edycja()
{
	;
}

Edycja::~Edycja()
{
	;
}