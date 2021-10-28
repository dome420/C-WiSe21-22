// Offline 03.07 F Zählen einer fest programmierten Vergleichszahl.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>



int main()
{
	int eingabe = 0, tmp_speicher = 0, gleich = 0, ungleich = 0;

	// fest programmierten Vergleichszahl
	const int Vergleichzahl = 99;

	for (int i = 1; i < 5; i++)
	{
		std::cout << "Bitte geben Sie die " << i << ". Zahl ein: ? ";
		std::cin >> eingabe;
		tmp_speicher = eingabe;
		if (tmp_speicher == Vergleichzahl) {
			gleich++;
		}
		else
		{
			ungleich++;
		}
	}

	std::cout << gleich << " Eingabezahlen waren gleich der Vergleichszahl 99.\n";
	std::cout << ungleich << " Eingabezahlen waren ungleich der Vergleichszahl 99.\n";

	system("pause");
	return 0;
}