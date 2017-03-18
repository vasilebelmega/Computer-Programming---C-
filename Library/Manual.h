#include"Carte.h"
using namespace std;


class Manual : public Carte{
private:	
	char *tipManual;
	int clasa;
public:
	void afisareinfo();
	Manual(char *nume, int pret, int nrExemplare, char *tipManual, int clasa);
	~Manual();
};