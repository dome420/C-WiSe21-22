#include "wortfunktionen.h"
#include <iomanip> 


void ausgabe(std::string text, int pos) 
{
	char stern = '*';
	std::cout << text << std::endl;
	std::cout << std::setw(pos + 1) << stern << std::endl;
};
char eingabe() {
	char eingabe_befehl;
	std::cout << "Befehl (l: links, r: rechts, s: spiegeln, q: Ende) ? ";
	std::cin >> eingabe_befehl;
	return eingabe_befehl;
};