#include<iostream>
#include<stdlib.h>
#include"Manual.h"
#define MAX_LENGTH 100

using namespace std;
	
	Manual::Manual(char *nume, int pret, int nrExemplare, char *tipManual, int clasa):Carte(nume, pret, nrExemplare){
		
		this->tipManual = new char[MAX_LENGTH];
		strcpy(this->tipManual, tipManual);
		this->clasa = clasa;
	}
	Manual::~Manual(){delete this->tipManual;}

	void Manual::afisareinfo(){
		cout<<"Nume: "<<getNume();
		cout<<" NrExemplare: "<<getNrExemplare();
		cout<<" Pret: "<<getPret();
		cout << " tipManual: "<< tipManual;
		cout << " clasa: "<< clasa <<endl;
	}

