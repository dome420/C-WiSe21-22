#include <iostream>
#include <string>


bool gefunden(char zeichen, std::string eingabe) 
{
	bool zeichen_gefunden = false;
	for (size_t pos_index_v = 0; pos_index_v < eingabe.length(); pos_index_v++)
	{
		if (eingabe[pos_index_v] == zeichen)
		{
			zeichen_gefunden = true;
			break;
		}
	}
	return zeichen_gefunden;
}
void spalte_ab_erstem(char zeichen, std::string eingabe, std::string& erster_teil, std::string& zweiter_teil) 
{ 
	int tmp_pos = 0;
	
	if (gefunden(zeichen,eingabe))
	{
		for (size_t pos_index_v = 0; pos_index_v < eingabe.length(); pos_index_v++)
		{
			if (eingabe[pos_index_v] == zeichen)
			{
				tmp_pos = pos_index_v + 1;
				break;
			}
			else
			{
				erster_teil += eingabe[pos_index_v];
			}
			for (size_t i = tmp_pos; i < eingabe.length(); i++)
			{
				zweiter_teil += eingabe[i];
			}
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
	char spalte_ab_zeichen;

	std::string erster_teil, zweiter_teil;

	std::cout << "Bitte geben Sie die einzeilige Zeichenkette ein: ? ";
	std::getline(std::cin, eingabe_text);
	std::cout << "Bitte geben Sie das Zeichen ein: ? ";
	std::cin >> spalte_ab_zeichen;
	spalte_ab_erstem(spalte_ab_zeichen, eingabe_text, erster_teil, zweiter_teil);
	std::cout << "Der erste Teil der Zeichenkette lautet:  " << erster_teil << std::endl;
	std::cout << "Der zweite Teil der Zeichenkette lautet: " << zweiter_teil << std::endl;

	system("pause");
	return 0;
}