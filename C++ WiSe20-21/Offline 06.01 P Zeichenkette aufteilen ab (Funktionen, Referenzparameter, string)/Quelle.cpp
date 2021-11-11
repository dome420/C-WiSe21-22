#include <iostream>
#include <string>

// prüft ob zeichen überhaupt im string ist
bool gefunden(char zeichen, std::string eingabe)
{
	bool zeichen_gefunden = false;
	for (size_t pos_index = 0; pos_index < eingabe.length(); pos_index++)
	{
		if (eingabe[pos_index] == zeichen) {
			zeichen_gefunden = true;
			break;
		}
	}
	return zeichen_gefunden;
}
void spalte_ab_erstem(char zeichen, std::string eingabe, std::string& erster_teil, std::string& zweiter_teil)
{
	int tmp_pos = 0;
	if (gefunden(zeichen, eingabe)) 
	{
		// erster teil
		for (size_t pos = 0; pos < eingabe.length(); pos++)
		{
			if (eingabe[pos] == zeichen)
			{
				// weil wir ab dem zeichen danach weiter machen und das gesuchte zeichen weg fällt
				tmp_pos = pos+1;
				break;
			}
			else
			{
				erster_teil += eingabe[pos];
			}
		}
		// zweiter teil
		for (size_t pos = tmp_pos; pos < eingabe.length(); pos++)
		{
			zweiter_teil += eingabe[pos];
		}
	}
	else
	{
		erster_teil = eingabe;
	}

}

int main()
{
	std::string eingabe_text;
	char ab_zeichen_spalten;
	std::string erster_teil, zweiter_teil;

	std::cout << "Bitte geben Sie die einzeilige Zeichenkette ein: ? ";
	std::getline(std::cin, eingabe_text);
	std::cout << "Bitte geben Sie das Zeichen ein: ? ";
	std::cin >> ab_zeichen_spalten;

	spalte_ab_erstem(ab_zeichen_spalten, eingabe_text, erster_teil, zweiter_teil);
	std::cout << "Der erste Teil der Zeichenkette lautet: " << erster_teil << std::endl;
	std::cout << "Der zweite Teil der Zeichenkette lautet: " << zweiter_teil << std::endl;

	system("pause");
	return 0;
}