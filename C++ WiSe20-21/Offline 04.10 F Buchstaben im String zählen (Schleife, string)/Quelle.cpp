#include <iostream>
#include <string>

int main()
{

	std::string eingabe;
	char gesuchtes_zeichen;
	int haeufigkeit = 0;

	std::cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
	std::getline(std::cin, eingabe);
	std::cout << "Bitte Buchstaben eingeben: ? ";
	std::cin >> gesuchtes_zeichen;


	for (unsigned pos = 0; pos < eingabe.length(); pos++)
	{
		if (eingabe[pos] == gesuchtes_zeichen)
		{
			haeufigkeit++;
		}
	}
	std::cout << "Der Buchstabe " << gesuchtes_zeichen << " kommt " << haeufigkeit << " mal im Text vor.\n";
	

	system("pause");
	return 0;
}