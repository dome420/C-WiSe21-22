#include <iostream>
#include <string>

int main() {


	std::string text, tmp_neu;
	unsigned ergebnis = 0;

	std::cout << "Bitte die Zahl oder das Wort 'ende' eingeben: ? ";
	std::getline(std::cin, text);

	for (size_t i = 0; i < text.length(); i++)
	{
		if (text[0] == 'e') {
			if (text[1] == 'n') {
				if (text[2] == 'd') {
					if (text[3] == 'e') {
						break;
					}
				}
			}
		}
		else if(text[i] >= '0' && text[i] <= '9')
		{
			// rechnung ist korrekt -> string in int
			char ergebnis = (text[i] - '0');
			// verdopplung des wertes
			int ergebnis_1= ergebnis * 2;
			// umwandlung zum richtigen zeichen -> ASCII Tabelle
			char tmp = ergebnis_1 + '0';
			//  in array einfügen als char
			text[i] = tmp;
		}
	}
	std::cout << "Der doppelte Wert betraegt: " << text;

	system("pause");
	return 0;
}