
#pragma once
using namespace std;

class Carte{
protected:
	char *nume;
	int pret, nrExemplare;
public:
	Carte();
	Carte(char *nume, int pret, int nrExemplare);
	~Carte();
	void setNume(char *x);
	void setPret(int y);
	void setNrExemplare(int z);
	char *getNume();
	int getPret();
	int getNrExemplare();
	friend int pretTotalCarte(Carte &test);
	virtual void afisareinfo() = 0;
};