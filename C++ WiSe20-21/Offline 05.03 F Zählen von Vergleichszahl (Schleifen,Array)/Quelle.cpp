#include <iostream>

int main() {

	int my_arr[4] = {}, eingabe = 0, gleich = 0, ungleich = 0, vergleichszahl = 0;
	for (size_t i = 0; i < 4; i++)
	{
		std::cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
		std::cin >> eingabe;
		my_arr[i] = eingabe;
	}

	std::cout << "Bitte geben Sie die Vergleichszahl ein: ? ";
	std::cin >> vergleichszahl;

	for (size_t pos = 0; pos < 4; pos++)
	{
		if (my_arr[pos] == vergleichszahl)
			gleich++;
		else
			ungleich++;
	}

	std::cout << gleich << " Eingabezahlen waren gleich der Vergleichszahl.\n";
	std::cout << ungleich <<" Eingabezahlen waren ungleich der Vergleichszahl.\n";

	system("Pause");
	return 0;
}