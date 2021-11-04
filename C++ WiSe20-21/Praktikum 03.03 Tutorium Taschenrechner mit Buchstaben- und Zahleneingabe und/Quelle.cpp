#include <iostream>


int main() 
{

	char Eingabe_1, Eingabe_2;
	char Ergebnis = 0;
	std::cout << "Bitte geben Sie die erste Ziffer ein: ? ";
	std::cin >> Eingabe_1;
	std::cout << "Bitte geben Sie die zweite Ziffer ein: ? ";
	std::cin >> Eingabe_2;

	if (Eingabe_1 == 'q' || Eingabe_2 == 'q')
	{
		std::cout << "Das Programm wurde durch Eingabe von q beendet.\n";
		return 1;
	}
	else
	{
		Ergebnis = int((Eingabe_1+Eingabe_2)-'0');
	}
	std::cout << int(Eingabe_1) - '0' << " + " << int(Eingabe_2) - '0' << " = " << Ergebnis << std::endl;
	system("pause");
	return 0;
}