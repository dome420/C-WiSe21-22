#include <iostream>
#include <string>

int main()
{

	std::string eingabe;
	char zu_ersetzendes_zeichen, ersatz_zeichen;


	std::cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
	std::getline(std::cin, eingabe);
	std::cout << "Bitte den zu ersetzenden Buchstaben eingeben: ? ";
	std::cin >> zu_ersetzendes_zeichen;
	std::cout << "Bitte den Ersatz-Buchstaben eingeben: ? ";
	std::cin >> ersatz_zeichen;


	for (unsigned pos = 0; pos < eingabe.length(); pos++)
	{
		if (eingabe[pos] == zu_ersetzendes_zeichen)
		{
			eingabe[pos] = ersatz_zeichen;
		}
	}
	std::cout << "Der Text nach der Ersetzung: " << eingabe << std::endl;


	system("pause");
	return 0;
}