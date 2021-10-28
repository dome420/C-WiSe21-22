// Offline 03.06 Kleinste und Größte von drei eingegebenen Zahlen(if,else).cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>



int main()
{
	int eingabe = 0;
	int high = 0, low = 0;
	for (int i = 1; i < 4; i++)
	{
		std::cout << " Bitte geben Sie die " << i << ". Zahl ein: ";
		std::cin >> eingabe;
		if (i == 1) {
			high = eingabe;
			low = eingabe;
		}
		else if (eingabe > high)
		{
			high = eingabe;
		}
		else if (eingabe < low) {
			low = eingabe;
		}
	}
	std::cout << "Groesste Zahl: " << high << std::endl;
	std::cout << "Kleinste Zahl: " << low << std::endl;

	system("pause");
	return 0;
}