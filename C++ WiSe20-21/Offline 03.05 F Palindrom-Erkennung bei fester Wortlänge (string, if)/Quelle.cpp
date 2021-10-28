// Offline 03.05 F Palindrom-Erkennung bei fester Wortlänge (string, if).cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>

int main()
{
    std::string eingabe_text = " ";
    bool ist_palindrom = false;

    std::cout << "Bitte geben Sie die Zeichenkette ( 6 Zeichen) ein: ? ";
    getline(std::cin, eingabe_text);

    for (unsigned z_vorne = 0, z_hinten = eingabe_text.length() - 1; z_vorne < eingabe_text.length() - 1 && z_hinten > 0; z_hinten--, z_vorne++)
    {
        if (eingabe_text[z_vorne] == eingabe_text[z_hinten])
        {
            ist_palindrom = true;
        }
        else
        {
            ist_palindrom = false;
        }
    }

    if (ist_palindrom == true)
    {
        std::cout << "Das eingegebene Wort ist ein Palindrom.\n";
    }
    else
    {
        std::cout << "Das eingegebene Wort ist KEIN Palindrom.\n";
    }

    system("pause");
    return 0;
}