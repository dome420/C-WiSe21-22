#include <iostream>

int main() 
{
	int my_arr[6] = {};
	int eingabe = 0, suchzahl = 0;
	bool suchzahl_gefunden = false;

	for (size_t i = 0; i < 6; i++)
	{
		do
		{
			std::cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
			std::cin >> eingabe;
			my_arr[i] = eingabe;
		} while (eingabe < 1 && eingabe > 6);
	}

	std::cout << "Bitte geben Sie die Suchzahl ein: ? ";
	std::cin >> suchzahl;
	
	for (size_t i = 0; i < 6; i++)
	{
		if (my_arr[i] == suchzahl) {
			suchzahl_gefunden = true;
			break;
		}
	}

	if (suchzahl_gefunden)
		std::cout << "Die Suchzahl kam unter den Eingaben vor.\n";
	else
	{
		std::cout << "Die Suchzahl kam unter den Eingaben NICHT vor.\n";
	}

	system("pause");
	return 0;
}