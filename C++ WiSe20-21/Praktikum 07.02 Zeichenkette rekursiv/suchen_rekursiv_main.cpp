
/*#define CATCH_CONFIG_RUNNER
#include "catch.h"
*/
#include <iostream>
#include <string>
using namespace std;
#include "suchen.h"
#include "suchen_rekursiv.h"



int main()
{
    //Catch::Session().run();
    string text,suche;
    // Ihr Code ab hier ...
    cout << "Bitte geben Sie den Text ein: ";
    getline(cin, text);
    cout << "Bitte geben Sie die zu suchende Zeichenkett ein: ";
    getline(cin, suche);
    cout << "Sie startet ab Zeichen " << zeichenkette_suchen_rekursiv(text, suche) << " (bei Zaehlung ab 0)." << endl;;

    system("PAUSE");
    return 0;
}