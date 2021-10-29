#include <iostream>
#include <string>

bool text_ok(std::string& eingabe) 
{
	bool text_ist_ok = false;
	for(unsigned pos = 0; pos < eingabe.length();pos++)
	{
		if (eingabe[pos] > 'a' && eingabe[pos] < 'z') {
			text_ist_ok = true;
		}
		else
		{
			text_ist_ok = false;
		}
	}
	return text_ist_ok;
}

bool ist_Palindrom(std::string& eingabe) 
{
	bool palindrom_gefunden = false;

	for (unsigned pos_vorne = 0,pos_hinten = eingabe.length()-1; pos_vorne < eingabe.length(); pos_vorne++,pos_hinten--)
	{
		if (eingabe[pos_vorne] == eingabe[pos_hinten]) 
		{
			palindrom_gefunden = true;
		}
		else
		{
			palindrom_gefunden = false;
		}
	}
	
	return palindrom_gefunden;
}
int main()
{
	std::string eingabe;
	do
	{
		std::cout << "Text: ? ";
		std::getline(std::cin, eingabe);
	} while (text_ok(eingabe)==false);


	if (ist_Palindrom(eingabe))
		std::cout << "Das eingegebene Wort ist ein Palindrom.\n";
	else
		std::cout << "Das eingegebene Wort ist KEIN Palindrom. \n";
	

	system("pause");
	return 0;
}