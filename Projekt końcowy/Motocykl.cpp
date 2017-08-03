#include "Motocykl.h"

std::string Motocykl::getRodzajNapedu()
{
	return rodzajNapedu;
}

void Motocykl::setRodzajNapedu(std::string rodzajNapedu)
{
	this->rodzajNapedu = rodzajNapedu;
}

Motocykl::Motocykl(std::string nazwaPlik)
{
	std::ifstream plik;
	plik.open(nazwaPlik);

	int h_id; 
	std::string h_nazwa; 
	int h_rocznik;
	long h_przebieg;
	double h_pojemnosc;
	char h_paliwo;
	std::string h_kraj;
	std::string h_kolor;
	double h_spalanie;
	std::vector<std::string> h_dodatki; 
	double h_cena;
	std::string h_separator;
	int h_ileDodatkow;
	std::string h_rodzajNapedu;

	if(plik.is_open())
	{
		
		plik >> h_id;
		plik.get();
		setId(h_id);
		//-------------------
		getline(plik, h_nazwa);
		setNazwa(h_nazwa);
		//-------------------
		plik >> h_rocznik;
		plik.get();
		setRocznik(h_rocznik);
		//-------------------
		plik >> h_przebieg;
		plik.get();
		setPrzebieg(h_przebieg);
		//-------------------
		plik >> h_pojemnosc;
		plik.get();
		setPojemnosc(h_pojemnosc);
		//-------------------
		getline(plik, h_rodzajNapedu);
		setRodzajNapedu(h_rodzajNapedu);
		//-------------------
		plik >> h_paliwo;
		plik.get();
		setPaliwo(h_paliwo);
		//-------------------
		getline(plik, h_kraj);
		setKraj(h_kraj);
		//-------------------
		getline(plik, h_kolor);
		setKolor(h_kolor);
		//-------------------
		plik >> h_spalanie;
		plik.get();
		setSpalanie(h_spalanie);
		//-------------------
		plik >> h_ileDodatkow;
		for (int i = 0; i < h_ileDodatkow; i++)
		{
			std::string s;
			plik >> s;
			setDodatki(s);
		}
		plik.get();
		//-----------------
		plik >> h_cena;
		plik.get();
		setCena(h_cena);
		//-------------------
		getline(plik, h_separator);

		plik.close();
	}
	else
	{
		std::cout << "BLAD OTWARCIA PLIKU!" << std::endl; 
	}

}

void Motocykl::danePojazdu()
{
	std::cout << "ID pojazdu: \t" << getId() << std::endl;
	std::cout << "Nazwa: \t\t" << getNazwa() << std::endl;
	std::cout << "Rocznik: \t" << getRocznik() << std::endl;
	std::cout << "Przebieg: \t" << getPrzebieg() << std::endl;
	std::cout << "Pojemnosc: \t" << getPojemnosc() << std::endl;
	std::cout << "Naped: \t\t" << getRodzajNapedu() << std::endl;
	std::cout << "Rodzaj paliwa: \t" << getPaliwo() << std::endl;
	std::cout << "Pochodzenie: \t" << getKraj() << std::endl;
	std::cout << "Kolor: \t\t" << getKolor() << std::endl;
	std::cout << "Spalanie: \t" << getSpalanie() << std::endl;

	std::cout << "Dodatki: \t";
	for(int i = 0; i < getDodatki().size(); i++)
	{
		std::cout << getDodatki()[i] << "\t";
	}

	std::cout << std::endl;
	std::cout << "Cena: \t\t" << getCena() << std::endl;
}

void Motocykl::IdNazwa()
{
	std::cout << "ID pojazdu: \t" << getId() << std::endl;
	std::cout << "Nazwa: \t\t" << getNazwa() << std::endl;
}

void Motocykl::wymianaNapedu()
{
	int czyWymienic = rand()%2;
	switch(czyWymienic)
	{
		case 0:
			std::cout << "Zalecana wymiana napedu!" << std::endl;
			break;
		case 1:
			std::cout << "Naped OK, mozna spokojnie jezdzic!" << std::endl << std::endl;
			break;
	}
}

void Motocykl::przeglad()
{
	if(getPrzebieg() > 20000)
	{
		std::cout << "Zalecany przeglad motocykla." << std::endl;
	}
	else
	{
		int kiedyPrzeglad = 20000 - getPrzebieg();
		std::cout << "Wszystko OK, kolejny przeglad zalecamy zrobic za okolo " << kiedyPrzeglad << "km." << std::endl;
	}
}

void Motocykl::jazdaProbna()
{
	char decyzja = 'n';
	std::cout << "Czy chcesz przegladnac naped? (t/n)" << std::endl;
	std::cin >> decyzja;
	std::cin.get();
	if (decyzja == 't')
	{
		wymianaNapedu();
		decyzja = 'n';
	}
	przeglad();
	std::cout << std::endl;
}

Motocykl::Motocykl()
{
	;
}

Motocykl::~Motocykl()
{
	;
}