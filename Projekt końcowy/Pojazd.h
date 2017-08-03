#ifndef POJAZD
#define POJAZD

#include <string>
#include <vector>
#include <fstream>
#include <iostream>

class Pojazd
{
private:
	int id; //unikalne id dla kazdego pojazdu
	std::string nazwa; 
	int rocznik;
	long przebieg;
	double pojemnosc;
	char paliwo;
	std::string kraj;
	std::string kolor;
	double spalanie;
	std::vector<std::string> dodatki;
	double cena;

public:
	virtual void danePojazdu() = 0;
	virtual void jazdaProbna() = 0;
	virtual void IdNazwa() = 0;

	//akcesory
	int getId();
	void setId(int id);

	std::string getNazwa();
	void setNazwa(std::string nazwa);

	int getRocznik();
	void setRocznik(int rocznik);

	long getPrzebieg();
	void setPrzebieg(long przebieg);

	double getPojemnosc();
	void setPojemnosc(double pojemnosc);

	char getPaliwo();
	void setPaliwo(char paliwo);

	std::string getKraj();
	void setKraj(std::string kraj);

	std::string getKolor();
	void setKolor(std::string kolor);

	double getSpalanie();
	void setSpalanie(double spalanie);

	std::vector<std::string>  getDodatki();
	void setDodatki(std::string dodatek);

	double getCena();
	void setCena(double cena);
};

#endif