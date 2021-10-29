#include <iostream>

int main() 
{
	int Breite = 0, Hoehe = 0;

	std::cout << "Bitte geben Sie die Breite des Rechtecks ein: ";
	std::cin  >> Breite;
	std::cout << "Bitte geben Sie die Hoehe des Rechtecks ein: ";
	std::cin  >> Hoehe;

	// Zeichnet die Y - Achse
	for (int i = 1; i <= Hoehe; i++)
	{

		std::cout << "*";
		// Zeichnet die X - Achse
		for (int j = 1; j < Breite; j++)
		{
			
			if ((i > 1 && i < Hoehe) && j < Breite-1)
			{
				std::cout << " +";
			}
			else
			{
				std::cout << " *";
			}
		}
		std::cout << std::endl;
	}


	std::cout << std::endl;
	system("pause");
	return 0;
}