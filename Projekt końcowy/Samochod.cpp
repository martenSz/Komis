#include "Samochod.h"

int Samochod::getLibczaDrzwi()
{
	return liczbaDrzwi;
}

void Samochod::setLiczbaDrzwi(int liczbaDrzwi)
{
	this->liczbaDrzwi = liczbaDrzwi;
}

std::string Samochod::getTyp()
{
	return typ;
}

void Samochod::setTyp(std::string typ)
{
	this->typ = typ;
}

int Samochod::getPojemnoscBagaznika()
{
	return pojemnoscBagaznika;
}

void Samochod::setPojemnoscBagaznika(int pojemnoscBagaznika)
{
	this->pojemnoscBagaznika = pojemnoscBagaznika;
}

Samochod::Samochod(std::string nazwaPlik)
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
	int h_liczbaDrzwi;
	std::string h_typ;
	int h_pojemnoscBagaznika;

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
		getline(plik, h_typ);
		setTyp(h_typ);
		//-------------------
		plik >> h_pojemnoscBagaznika;
		plik.get();
		setPojemnoscBagaznika(h_pojemnoscBagaznika);
		//-------------------
		plik >> h_paliwo;
		plik.get();
		setPaliwo(h_paliwo);
		//-------------------
		plik >> h_liczbaDrzwi;
		plik.get();
		setLiczbaDrzwi(h_liczbaDrzwi);
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

Samochod::Samochod()
{
	;
}

void Samochod::danePojazdu()
{
	std::cout << "ID pojazdu: \t" << getId() << std::endl;
	std::cout << "Nazwa: \t\t" << getNazwa() << std::endl;
	std::cout << "Rocznik: \t" << getRocznik() << std::endl;
	std::cout << "Przebieg: \t" << getPrzebieg() << std::endl;
	std::cout << "Pojemnosc: \t" << getPojemnosc() << std::endl;
	std::cout << "Typ nadwozia: \t" << getTyp() << std::endl;
	std::cout << "Rodzaj paliwa: \t" << getPaliwo() << std::endl;
	std::cout << "Liczba drzwi: \t" << getLibczaDrzwi() << std::endl;
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

void Samochod::IdNazwa()
{
	std::cout << "ID pojazdu: \t" << getId() << std::endl;
	std::cout << "Nazwa: \t\t" << getNazwa() << std::endl;
}

void Samochod::jazdaProbna()
{
	char decyzja = 'n';
	std::cout << "Czy chcesz otworzyc maske? (t/n)" << std::endl;
	std::cin >> decyzja;
	std::cin.get();
	if (decyzja == 't')
	{
		otworzMaske();
		decyzja = 'n';
	}

	std::cout << "Czy chcesz otworzyc bagaznik? (t/n)" << std::endl;
	std::cin >> decyzja;
	std::cin.get();
	if (decyzja == 't')
	{
		otworzBagaznik();
		decyzja = 'n';
	}

	std::cout << "Czy chcesz wsiasc do samochodu? (t/n)" << std::endl;
	std::cin >> decyzja;
	std::cin.get();
	if (decyzja == 't')
	{
		wsiadzDoSamochodu();
		decyzja = 'n';
	}
	
	std::cout << "Czy chcesz otworzyc dach? (t/n)" << std::endl;
	std::cin >> decyzja;
	std::cin.get();
	if (decyzja == 't')
	{
		rozlozDach();
		decyzja = 'n';
	}
}

void Samochod::rozlozDach()
{
	std::vector<std::string> lista = getDodatki();
	for (int i = 0; i < lista.size(); i++)
	{
		if (lista[i]=="rozkladany_dach")
		{
			std::cout << "Rozlozono dach." << std::endl;
		}
		else
		{
			std::cout << "Niestety ten samochod nie posiada rozkladanego dachu." << std::endl;
			break;
		}
	}
}

void Samochod::otworzBagaznik()
{
	if(getPojemnoscBagaznika() > 500)
	{
		std::cout << "Przestronny bagaznik. Spokojnie mozna zaladowac wszystkie potrzebne rzeczy na wakacje z cala rodzina!" << std::endl;
	}
	else
	{
		std::cout << "Bagaznik nie jet zbyt duzy ale wystarczajacy dla samochodu do codziennego uzytku." << std::endl;
	}
}

void Samochod::otworzMaske()
{
	if(getPrzebieg() > 120000)
	{
		std::cout << "Zalecany przeglad samochodu." << std::endl;
	}
	else
	{
		int kiedyPrzeglad = 120000 - getPrzebieg();
		std::cout << "Wszystko OK, kolejny przeglad zalecamy zrobic za okolo " << kiedyPrzeglad << "km." << std::endl;
	}
}

void Samochod::wsiadzDoSamochodu()
{
	std::vector<std::string> lista = getDodatki();
	for (int i = 0; i < lista.size(); i++)
	{
		if (lista[i]=="skora")
		{
			std::cout << "Elegancka, skorzana tapicerka i fotele." << std::endl;
		}
		else
		{
			std::cout << "Ladna, zadbana tapicerka." << std::endl;
			break;
		}
	}
}

Samochod::~Samochod()
{
	;
}