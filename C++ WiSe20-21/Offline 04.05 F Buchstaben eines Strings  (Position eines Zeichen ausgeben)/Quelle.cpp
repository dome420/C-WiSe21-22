#include <iostream>
#include <string>  



int main()
{
	std::string eingabe;

	std::cout << "Bitte einzeiligen Text eingeben (ohne Leerzeichen): ? ";
	getline(std::cin, eingabe);
	
	for (unsigned pos = 0; pos < eingabe.length(); pos++)
	{
		std::cout << "Position: " << pos  << " Buchstabe: " << eingabe[pos] << std::endl;
	}

	system("pause");
	return 0;
}