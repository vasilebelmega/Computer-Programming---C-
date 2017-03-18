#include"Carte.h"
using namespace std;


class Roman : public Carte{
private:
	char *tipRoman;
public:
	void afisareinfo();
	
	Roman(char *nume, int pret, int nrExemplare, char *tipRoman);
	~Roman();
};