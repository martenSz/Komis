#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
#include "Pojazd.h"
#include "Samochod.h"
#include "Motocykl.h"
#include "Sprzedaz.h"
#include "Edycja.h"

using namespace std;

ostream& operator<<(ostream& out, Samochod& x)
{
	out << "ID pojazdu: \t" << x.getId() << endl;
	out << "Nazwa: \t\t" << x.getNazwa() << endl;
	out << "Rocznik: \t" << x.getRocznik() << endl;
	out << "Przebieg: \t" << x.getPrzebieg() << endl;
	out << "Pojemnosc: \t" << x.getPojemnosc() << endl;
	out << "Typ nadwozia: \t" << x.getTyp() << endl;
	out << "Rodzaj paliwa: \t" << x.getPaliwo() << endl;
	out << "Liczba drzwi: \t" << x.getLibczaDrzwi() << endl;
	out << "Pochodzenie: \t" << x.getKraj() << endl;
	out << "Kolor: \t\t" << x.getKolor() << endl;
	out << "Spalanie: \t" << x.getSpalanie() << endl;
	out << "Dodatki: \t";
	for(int i = 0; i < x.getDodatki().size(); i++)
	{
		out << x.getDodatki()[i] << "\t";
	}
	out << endl;
	out << "Cena: \t\t" << x.getCena() << endl;
	return out;
}

ostream& operator<<(ostream& out, Motocykl& x)
{
	out << "ID pojazdu: \t" << x.getId() << endl;
	out << "Nazwa: \t\t" << x.getNazwa() << endl;
	out << "Rocznik: \t" << x.getRocznik() << endl;
	out << "Przebieg: \t" << x.getPrzebieg() << endl;
	out << "Pojemnosc: \t" << x.getPojemnosc() << endl;
	out << "Naped: \t\t" << x.getRodzajNapedu() << endl;
	out << "Rodzaj paliwa: \t" << x.getPaliwo() << endl;
	out << "Pochodzenie: \t" << x.getKraj() << endl;
	out << "Kolor: \t\t" << x.getKolor() << endl;
	out << "Spalanie: \t" << x.getSpalanie() << endl;
	out << "Dodatki: \t";
	for(int i = 0; i < x.getDodatki().size(); i++)
	{
		out << x.getDodatki()[i] << "\t";
	}
	out << endl;
	out << "Cena: \t\t" << x.getCena() << endl;
	return out;
}

int main()
{
	srand(time(NULL));
	Samochod s1("SAMOCHODY\\VW1300.txt");
	Samochod s2("SAMOCHODY\\BMW1100.txt");
	Samochod s3("SAMOCHODY\\MAZDA1200.txt");
	Samochod s4("SAMOCHODY\\AUDI1400.txt");
	Samochod s5("SAMOCHODY\\CHEVROLET1500.txt");
	Samochod s6("SAMOCHODY\\CITROEN1900.txt");
	Samochod s7("SAMOCHODY\\JAGUAR1600.txt");
	Samochod s8("SAMOCHODY\\HONDA1700.txt");
	Samochod s9("SAMOCHODY\\HYUNDAI1800.txt");
	Samochod s10("SAMOCHODY\\AUDI1410.txt");
	Samochod s11("SAMOCHODY\\JEEP2000.txt");

	Motocykl m1("MOTOCYKLE\\SUZUKI100.txt");
	Motocykl m2("MOTOCYKLE\\YAMAHA300.txt");
	Motocykl m3("MOTOCYKLE\\KAWASAKI200.txt");
	Motocykl m4("MOTOCYKLE\\BMW400.txt");
	Motocykl m5("MOTOCYKLE\\TRIUMPH500.txt");

	vector<Sprzedaz> listaOfertSamochody;
	Sprzedaz sp1(1,1,1,2014,&s1,"DO SPRZEDANIA");
	Sprzedaz sp2(2,2,3,2014,&s2,"DO SPRZEDANIA");
	Sprzedaz sp3(3,4,5,2014,&s3,"DO SPRZEDANIA");
	Sprzedaz sp4(4,18,8,2014,&s4,"DO SPRZEDANIA");
	Sprzedaz sp5(5,21,9,2014,&s5,"DO SPRZEDANIA");
	Sprzedaz sp6(6,14,2,2014,&s6,"DO SPRZEDANIA");
	Sprzedaz sp7(7,30,7,2014,&s7,"DO SPRZEDANIA");
	Sprzedaz sp8(8,9,4,2014,&s8,"DO SPRZEDANIA");
	Sprzedaz sp9(9,14,9,2014,&s9,"DO SPRZEDANIA");
	Sprzedaz sp10(10,22,9,2014,&s10,"DO SPRZEDANIA");
	Sprzedaz sp11(11,7,7,2014,&s11,"DO SPRZEDANIA");

	listaOfertSamochody.push_back(sp1);
	listaOfertSamochody.push_back(sp2);
	listaOfertSamochody.push_back(sp3);
	listaOfertSamochody.push_back(sp4);
	listaOfertSamochody.push_back(sp5);
	listaOfertSamochody.push_back(sp6);
	listaOfertSamochody.push_back(sp7);
	listaOfertSamochody.push_back(sp8);
	listaOfertSamochody.push_back(sp9);
	listaOfertSamochody.push_back(sp10);
	listaOfertSamochody.push_back(sp11);

	vector<Sprzedaz> listaOfertMotocykle;
	Sprzedaz mp1(1,5,4,2014,&m1,"DO SPRZEDANIA");
	Sprzedaz mp2(2,12,6,2014,&m2,"DO SPRZEDANIA");
	Sprzedaz mp3(3,25,10,2014,&m3,"DO SPRZEDANIA");
	Sprzedaz mp4(4,18,5,2014,&m4,"DO SPRZEDANIA");
	Sprzedaz mp5(5,27,9,2014,&m5,"DO SPRZEDANIA");
			
	listaOfertMotocykle.push_back(mp1);
	listaOfertMotocykle.push_back(mp2);
	listaOfertMotocykle.push_back(mp3);
	listaOfertMotocykle.push_back(mp4);
	listaOfertMotocykle.push_back(mp5);

	cout << "0 - TRYB KLIENTA" << endl << "1 - TRYB ADMINA" << endl;
	int tryb;
	cin >> tryb;
	cin.get();
	if(tryb == 0)
	//-------------------------------------------------------------MENU ------------------------------------------------------------------
	{
		cout << "Witamy w naszym komisie samochodowym. W naszej ofercie oprocz aut mamy takze motocykle. Jakie oferty chcialbys przegladnac?"
			 << " (0 - samochody / 1 - motocykle)" << endl;
		int decyzja1;
		cin >> decyzja1;
		cin.get();

		switch(decyzja1)
		{
		case 0:
			{
				for (int i = 0; i < listaOfertSamochody.size(); i++)
				{
					listaOfertSamochody[i].pokazOferte();
				}

				cout << "Ktora oferte chcialbys przegladnac? (PODAJ NR OFERTY)" << endl;
				int wybranaOferta;
				cin >> wybranaOferta;
				cin.get();
			
				Samochod x;
				for (int i = 0; i < listaOfertSamochody.size(); i++)
				{
					if(wybranaOferta == listaOfertSamochody[i].getIdSprzedazy())
					{
						x = (Samochod&)listaOfertSamochody[i].getPojazd();
						cout << x << endl;
					
						cout << "Czy chcesz przejsc do jazdy probnej wybranym samochodem? (0 - NIE/1 - TAK)" << endl;
						int decyzja2;
						cin >> decyzja2;
						cin.get();
						switch(decyzja2)
						{
						case 1:
							{
								x.jazdaProbna();
								cout << "Czy dalej jestes zainteresowany tym samochodem?"
									" Przypominamy ze samochod kosztuje " << x.getCena() << "zl."
									" - (0-BIORE PO TEJ CENIE/1-LICYTACJA/2-REZYGNUJE)" << endl;
								int decyzja3;
								cin >> decyzja3;
								cin.get();
								switch(decyzja3)
								{
								case 0:
									{
										cout << "Samochod zostal sprzedany za " << x.getCena() << "zl. Gratulacje!"
											" Mamy jeszcze dla Ciebie gratis!" << endl;
										listaOfertSamochody[i].losujGratis();
										listaOfertSamochody[i].setStatus("SPRZEDANY");
										break;
									}
								case 1:
									{
										listaOfertSamochody[i].licytacjaCene();
										break;
									}
								case 2:
									{
										cout << "Dziekujemy za wizyte w naszym komisie. Zapraszamy ponownie!" << endl;
										break;
									}
								}

								break;
							}
						case 0:
							{
								cout << "Czy jestes zainteresowany tym samochodem?"
									" Przypominamy ze samochod kosztuje " << x.getCena() << "zl."
									" - (0-BIORE PO TEJ CENIE/1-LICYTACJA/2-REZYGNUJE)" << endl;
								int decyzja4;
								cin >> decyzja4;
								cin.get();
								switch(decyzja4)
								{
								case 0:
									{
										cout << "Samochod zostal sprzedany za " << x.getCena() << "zl. Gratulacje!"
											" Mamy jeszcze dla Ciebie gratis!" << endl;
										listaOfertSamochody[i].losujGratis();
										listaOfertSamochody[i].setStatus("SPRZEDANY");
										break;
									}
								case 1:
									{
										listaOfertSamochody[i].licytacjaCene();
										break;
									}
								case 2:
									{
										cout << "Dziekujemy za wizyte w naszym komisie. Zapraszamy ponownie!" << endl;
									}
								}
								break;
							}
						}
					
					}
				}
				if(wybranaOferta > listaOfertSamochody.size())
				{
					cout << "Oferta o podanym numerze nie istnieje!!!" << endl;
				}
				break;
			}
		case 1:
			{
				for(int i = 0; i < listaOfertMotocykle.size(); i++)
				{
					listaOfertMotocykle[i].pokazOferte();
				}

				cout << "Ktora oferte chcialbys przegladnac? (PODAJ NR OFERTY)" << endl;
				int wybranaOferta;
				cin >> wybranaOferta;
				cin.get();

				Motocykl x;
				for (int i = 0; i < listaOfertMotocykle.size(); i++)
				{
					if(wybranaOferta == listaOfertMotocykle[i].getIdSprzedazy())
					{
						x = (Motocykl&)listaOfertMotocykle[i].getPojazd();
						cout << x << endl;
						cout << "Czy chcesz przejsc do jazdy probnej wybranym motocyklem? (0 - NIE/1 - TAK)" << endl;
						int decyzja2;
						cin >> decyzja2;
						cin.get();
						switch(decyzja2)
						{
						case 1:
							{
								x.jazdaProbna();
								cout << "Czy dalej jestes zainteresowany tym motocyklem?"
									" Przypominamy ze motocykl kosztuje " << x.getCena() << "zl."
									" - (0-BIORE PO TEJ CENIE/1-LICYTACJA/2-REZYGNUJE)" << endl;
								int decyzja3;
								cin >> decyzja3;
								cin.get();
								switch(decyzja3)
								{
								case 0:
									{
										cout << "Motocykl zostal sprzedany za " << x.getCena() << "zl. Gratulacje!"
											" Mamy jeszcze dla Ciebie gratis!" << endl;
										listaOfertMotocykle[i].losujGratis();
										listaOfertMotocykle[i].setStatus("SPRZEDANY");
										break;
									}
								case 1:
									{
										listaOfertMotocykle[i].licytacjaCene();
										break;
									}
								case 2:
									{
										cout << "Dziekujemy za wizyte w naszym komisie. Zapraszamy ponownie!" << endl;
										break;
									}
								}
								break;
							}
						case 0:
							{
								cout << "Czy jestes zainteresowany tym motocyklem"
									" Przypominamy ze motocykl kosztuje " << x.getCena() << "zl."
									" - (0-BIORE PO TEJ CENIE/1-LICYTACJA/2-REZYGNUJE)" << endl;
								int decyzja4;
								cin >> decyzja4;
								cin.get();
								switch(decyzja4)
								{
								case 0:
									{
										cout << "Motocykl zostal sprzedany za " << x.getCena() << "zl. Gratulacje!"
											" Mamy jeszcze dla Ciebie gratis!" << endl;
										listaOfertMotocykle[i].losujGratis();
										listaOfertMotocykle[i].setStatus("SPRZEDANY");
										break;
									}
								case 1:
									{
										listaOfertMotocykle[i].licytacjaCene();
										break;
									}
								case 2:
									{
										cout << "Dziekujemy za wizyte w naszym komisie. Zapraszamy ponownie!" << endl;
									}
								}
								break;
							}
						}

					}
				}

				if(wybranaOferta > listaOfertMotocykle.size())
				{
					cout << "Oferta o podanym numerze nie istnieje!!!" << endl;
				}
				break;
			}
		default:
			{
				cout << "Inne opcje niedostepne. Dziekujemy za wizyte w naszym salonie." << endl;
			}
		}
	}
	else if(tryb == 1)
	{
		cout << "Wprowadz haslo:   ";
		string haslo;
		getline(cin, haslo);
		if(haslo == "12345")
		{
			cout << "EDYCJA SAMOCHODOW - 0" << endl << "EDYCJA MOTOCYKLI - 1" << endl;
			int edycja;
			cin >> edycja;
			cin.get();
			Edycja e;
			switch(edycja)
			{
			case 0:
				{
					for (int i = 0; i < listaOfertSamochody.size(); i++)
					{
						listaOfertSamochody[i].pokazOferte2();
						Samochod x;
						x = (Samochod&)listaOfertSamochody[i].getPojazd();
						cout << x;
						cout << "========================================" << endl;
					}
					cout << "Co chcesz zrobic? (0 - zmiana danych/ 1 - usuniecie pojazdu)" << endl;
					int decyzja;
					cin >> decyzja;
					cin.get();
					switch(decyzja)
					{
					case 0:
						{
							e.zmien(listaOfertSamochody);
							for (int i = 0; i < listaOfertSamochody.size(); i++)
							{
								listaOfertSamochody[i].pokazOferte2();
								Samochod x;
								x = (Samochod&)listaOfertSamochody[i].getPojazd();
								cout << x;
								cout << "========================================" << endl;
							}
							break;
						}
					case 1:
						{
							e.usun(listaOfertSamochody);
							for (int i = 0; i < listaOfertSamochody.size(); i++)
							{
								listaOfertSamochody[i].pokazOferte2();
								Samochod x;
								x = (Samochod&)listaOfertSamochody[i].getPojazd();
								cout << x;
								cout << "========================================" << endl;
							}
							break;
						}
					default:
						{
							cout << "BRAK INNYCH OPCJI" << endl;
						}
					}
					break;
				}
			case 1:
				{
					for (int i = 0; i < listaOfertMotocykle.size(); i++)
					{
						listaOfertMotocykle[i].pokazOferte2();
						Motocykl x;
						x = (Motocykl&)listaOfertMotocykle[i].getPojazd();
						cout << x;
						cout << "========================================" << endl;
					}
					cout << "Co chcesz zrobic? (0 - edycja/ 1 - usuniecie pojazdu)" << endl;
					int decyzja;
					cin >> decyzja;
					cin.get();
					switch(decyzja)
					{
					case 0:
						{
							e.zmien(listaOfertMotocykle);
							for (int i = 0; i < listaOfertMotocykle.size(); i++)
							{
								listaOfertMotocykle[i].pokazOferte2();
								Motocykl x;
								x = (Motocykl&)listaOfertMotocykle[i].getPojazd();
								cout << x;
								cout << "========================================" << endl;
							}
							break;
						}
					case 1:
						{
							e.usun(listaOfertMotocykle);
							for (int i = 0; i < listaOfertMotocykle.size(); i++)
							{
								listaOfertMotocykle[i].pokazOferte2();
								Motocykl x;
								x = (Motocykl&)listaOfertMotocykle[i].getPojazd();
								cout << x;
								cout << "========================================" << endl;
							}
							break;
						}
					default:
						{
							cout << "BRAK INNYCH OPCJI" << endl;
						}
					}	
					break;
				}
			default:
				{
					cout << "TAKA OPCJA NIE ISTNIEJE!" << endl;
				}
			
			}
		}
		else
		{
			cout << "BLEDNE HASLO" << endl;
		}
	}
	else
	{
		cout << "INNE TRYBY NIEDOSTEPNE" << endl;
	}
	
	cin.get();
	return 0;
}

