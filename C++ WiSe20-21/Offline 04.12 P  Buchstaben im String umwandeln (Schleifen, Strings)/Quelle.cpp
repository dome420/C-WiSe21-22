#include <iostream>
#include <string>

int main()
{

	std::string eingabe;
	std::string neuer_text;

	int zaehler_klein = 2, zaehler_gross = 3;

	std::cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
	std::getline(std::cin, eingabe);


	for (unsigned pos = 0; pos < eingabe.length(); pos++)
	{
		if (eingabe[pos] >= 'a' && eingabe[pos] <= 'z') 
		{
			for (size_t i = 1; i <= zaehler_klein; i++)
			{
				neuer_text += eingabe[pos];
			}
		}
		else if (eingabe[pos] >= 'A' && eingabe[pos] <= 'Z')
		{
			for (size_t i = 1; i <= zaehler_gross; i++)
			{
				neuer_text += eingabe[pos];
			}
		}
		else if (eingabe[pos] >= '0' && eingabe[pos] <= '9')
		{
			neuer_text += '.';
		}
		else if (eingabe[pos] == ' ')
		{
			neuer_text += '_';
		}
		else if (eingabe[pos] == '!' || eingabe[pos] == '?') {
			continue;

		}
		else
		{
			neuer_text += eingabe[pos];
		}
		
	}

	std::cout << "Text nach der Umwandlung: " << neuer_text << std::endl;
	system("pause");
	return 0;
}