#include <iostream>
#include <string>

int main() 
{
	
	std::string eingabe;
	char gesuchtes_zeichen;
	int tmp_pos = 0;
	bool gefunden = false;

	std::cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
	std::getline(std::cin, eingabe);
	std::cout << "Bitte Buchstaben eingeben: ? ";
	std::cin >> gesuchtes_zeichen;


	for (unsigned pos = 0; pos < eingabe.length(); pos++)
	{
		if (eingabe[pos] == gesuchtes_zeichen) {
			gefunden = true;
			tmp_pos = pos;
			break;
		}
		else
			gefunden = false;
	}

	if (gefunden)
		std::cout << "Der Buchstabe " << gesuchtes_zeichen << " kommt im Text vor, an Position " << tmp_pos << ".\n";
	else
		std::cout << "Der Buchstabe X kommt nicht im Text vor.\n";

	system("pause");
	return 0;
}