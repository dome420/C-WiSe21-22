#include <iostream>
#include <string>

int main() {

	std::string eingabe;

	std::cout << "Bitte Text eingeben (ggf. mit Leerzeichen): ? ";
	std::getline(std::cin, eingabe);

	//Variable für einen Ringtausch der Zeichen im String
	char tmp_speicher;

	for (unsigned i = 0,pos = eingabe.length()-1; pos > 0; i++,pos--)
	{
		//Ringtausch
		tmp_speicher = eingabe[pos];
		eingabe[pos] = eingabe[i];
		eingabe[i] = tmp_speicher;
	}

	std::cout << "Ergebnis " << eingabe << std::endl;
	system("pause");
	return 0;
	
}