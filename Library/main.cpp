#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include <ctime>
#include <sstream>
#include "Carte.h"
#include "Manual.h"
#include "Roman.h"
#define MAX_STRING 100
using namespace std;

int pretTotalCarte(Carte &test){
	int produs;
	produs = test.nrExemplare * test.pret;
	return produs;
}

int main()
{
	int contor = 0;
	char* s;
	s = new char[4];
	srand(time(0));
	Carte *books[MAX_STRING];
	for(int i = 0; i < MAX_STRING; i++)
	{
		if(rand() % 2 == 0)
		
			books[i] = new Manual("Manual",25,20,"Matematica",5);
		
		else
			books[i] = new Roman("Ion",30,8,"Interbelic");
	}

	cout<<"Manualele sunt:"<<endl;

	for(int i = 0; i < MAX_STRING; ++i)
	{
		Manual* M = dynamic_cast<Manual*>(books[i]);
		if(M)
		{	
			contor++;
			sprintf(s,"%d",contor);
			M->setNume(strcat(M->getNume(),s));
			M->afisareinfo();
		}

	}
	
	cout<<"Romanele sunt:"<<endl;
	contor = 0;
	for(int i = 0; i < MAX_STRING; ++i)
	{
		Roman* R = dynamic_cast<Roman*>(books[i]);
		if(R)
		{
			contor++;
			sprintf(s,"%d",contor);
			R->setNume(strcat(R->getNume(),s));
			R->afisareinfo();
		}
	}
	delete s;
	_getch();

	return 0;
}
