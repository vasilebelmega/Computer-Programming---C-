#include<iostream>
#include<stdlib.h>
#define MAX_LENGTH 100
#include"Roman.h"
using namespace std;

	
	void Roman::afisareinfo(){
		cout<<"Nume: "<<getNume();
		cout<<" NrExemplare: "<<getNrExemplare();
		cout<<" Pret: "<<getPret();
		cout<<" tipRoman: "<<tipRoman<<endl;
	}
	Roman::Roman(char *nume, int pret, int nrExemplare, char *tipRoman):Carte(nume, pret, nrExemplare){
		
		this->tipRoman = new char[MAX_LENGTH];
		strcpy(this->tipRoman, tipRoman);
	}
	Roman::~Roman(){delete this->tipRoman;}
