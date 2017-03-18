#include<iostream>
#include<stdlib.h>
#include"Carte.h"
#define MAX_LENGTH 100
using namespace std;



	Carte::Carte(){nume = NULL; pret = 0; nrExemplare = 0;}
	Carte::Carte(char *nume, int pret, int nrExemplare){
		
		this->nume = new char[MAX_LENGTH];
		strcpy(this->nume, nume);
		this->pret = pret;
		this->nrExemplare = nrExemplare;
	}
	Carte::~Carte(){delete this->nume;}

	void Carte::setNume(char *x){

		nume = x;
	}

	void Carte::setPret(int y){
		pret = y;
	}

	void Carte::setNrExemplare(int z){
		nrExemplare = z;
	}

	char* Carte :: getNume(){
		return nume;
	}
	
	int Carte::getPret(){
		return pret;
	}

	int  Carte::getNrExemplare(){
		return nrExemplare;
	}
