// Datei: wortspiegel_main.cpp

#define CATCH_CONFIG_RUNNER
#include "catch.h"

#include <iostream>
#include <string>


using namespace std;

#include "wortfunktionen.h"
#include "bildschirm.h"

int main()
{
	// Aufruf der Unit Tests ...
	Catch::Session().run();

	// Ab hier ihr Code ...
	string text;
	char eingabe_befehl; // für L , R , S, Q
	unsigned pos = 0;

	//  1. Eingabe der Textzeile
	cout << "Bitte geben Sie den Text ein: ? ";
	getline(cin, text);
	//  2. Endlosschleife:
	while (true)
	{
		//     2a. Ausgabe der Textzeile und der Zeile mit dem Sternchen
		ausgabe(text,pos);
		char eingabe_befehl  = eingabe();
		//     2b. Abfrage der Kommandoeingabe
		switch (eingabe_befehl)
		{
		case 'l':
			if(pos >= 0 && pos < text.length()-1)
				pos--;
			break;
		case 'r':
			if (pos >= 0 && pos < text.length()-1)
				pos++;
			break;
		case 's':
			//     2c. Auswertung des eingegebenen Kommandos
			//     Insbes. Aufruf der wortspiegel() Funktion beim Kommando 's'
			wortspiegel(text, pos);
			
			break;
		case 'q':
			return 1;
			break;
		}

	}
 

	system("PAUSE");
	return 0;
}
