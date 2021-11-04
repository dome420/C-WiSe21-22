#include <iostream>

int main() {

	int Stunde = 0, Minute = 0,Taktzeit = 0;

	do
	{
		std::cout << "Bitte geben Sie die Stunden der Startuhrzeit ein: ";
		std::cin >> Stunde;
	} while (Stunde < 0 || Stunde > 24);

	do
	{
		std::cout << "Bitte geben Sie die Minute der Startuhrzeit ein: ";
		std::cin >> Minute;
	} while (Minute < 0 || Minute > 59);

	std::cout << "Der erste Bus faehrt also um "<<Stunde<<":"<<Minute<<" Uhr. \n";
	do
	{
		std::cout << "Bitte geben Sie die Taktzeit in Minuten ein: ";
		std::cin >> Taktzeit;
	} while (Taktzeit < 0 ||Taktzeit > 180);

	int tmp_Stunde = Stunde, tmp_Minute = Minute;
	std::cout << tmp_Stunde << ":" << tmp_Minute << " ";
	do
	{
		if (tmp_Minute + Taktzeit >= 60)
		{
				
			tmp_Stunde = (tmp_Minute + Taktzeit) / 60;
			tmp_Minute = (tmp_Minute + Taktzeit) % 60;
			Stunde += tmp_Stunde;
			std::cout << std::endl;
			std::cout << Stunde << ":" << tmp_Minute << " ";
		}
		else
		{
			tmp_Minute += Taktzeit;
			std::cout << Stunde << ":" << tmp_Minute << " ";
		}
	} while ((Stunde + (tmp_Minute + Taktzeit) / 60) <= 23);
	
	std::cout << std::endl;
	system("pause");
	return 0;
}