#include "wortfunktionen.h"

void wortspiegel(std::string& text, int pos)
{
	int Anfang = 0, Ende = 0;
	//Wort Ende finden
	for (size_t i = pos; i < text.length(); i++)
	{
		if (text[i] == text[text.length()-1] && text[i] != '.')
		{
			Ende = i;
			break;
		}
		else if (text[i] == '.' || text[i] == ' ')
		{
			Ende = i - 1;
			break;
		}
	}
	//Wort Anfagn finden
	for (size_t i = pos; i > 0; i--)
	{
		if (text[i] == '.' || text[i] == ' ')
		{
			Anfang = i+1;
			break;
		}
	}
	for(;Anfang < Ende; Anfang++,Ende--)
	{
		//ringtausch der zeichen
		char tmp;
		tmp = text[Anfang];
		text[Anfang] = text[Ende];
		text[Ende] = tmp;
	}
};