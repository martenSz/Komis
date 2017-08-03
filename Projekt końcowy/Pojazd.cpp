#include "Pojazd.h"
#include <algorithm>

int Pojazd::getId()
{
	return id;
}
	
void Pojazd::setId(int id)
{
	this->id = id;
}

std::string Pojazd::getNazwa()
{
	return nazwa;
}
	
void Pojazd::setNazwa(std::string nazwa)
{
	this->nazwa = nazwa;
}

int Pojazd::getRocznik()
{
	return rocznik;
}

void Pojazd::setRocznik(int rocznik)
{
	this->rocznik = rocznik;
}
	
long Pojazd::getPrzebieg()
{
	return przebieg;
}
	
void Pojazd::setPrzebieg(long przebieg)
{
	this->przebieg = przebieg;
}

double Pojazd::getPojemnosc()
{
	return pojemnosc;
}

void Pojazd::setPojemnosc(double pojemnosc)
{
	this->pojemnosc = pojemnosc;
}
	
char Pojazd::getPaliwo()
{
	return paliwo;
}

void Pojazd::setPaliwo(char paliwo)
{
	this->paliwo = paliwo;
}

std::string Pojazd::getKraj()
{
	return kraj;
}

void Pojazd::setKraj(std::string kraj)
{
	this->kraj = kraj;
}

std::string Pojazd::getKolor()
{
	return kolor;
}

void Pojazd::setKolor(std::string kolor)
{
	this->kolor = kolor;
}

double Pojazd::getSpalanie()
{
	return spalanie;
}

void Pojazd::setSpalanie(double spalanie)
{
	this->spalanie = spalanie;
}

std::vector<std::string> Pojazd::getDodatki()
{	
	std::vector<std::string> dodatkiCopy;
	
	for (int i = 0; i < dodatki.size(); i++)
	{
		dodatkiCopy.push_back(dodatki[i]);
	}

	return dodatkiCopy;
}

void Pojazd::setDodatki(std::string dodatek) //dodajemy jeden dodatek
{
	this->dodatki.push_back(dodatek);
}

double Pojazd::getCena()
{
	return cena;
}

void Pojazd::setCena(double cena)
{
	this->cena = cena;
}
