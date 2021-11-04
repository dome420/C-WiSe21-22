#include <iostream>

int main() 
{
	int Tag_1 = 0, Monat_1 = 0, Jahr_1 = 0;
	int Tag_2 = 0, Monat_2 = 0, Jahr_2 = 0;
	std::cout << "Bitte geben Sie den Tag des ersten Datums ein: ";
	std::cin >> Tag_1;
	std::cout << "Bitte geben Sie den Monat des ersten Datums ein: ";
	std::cin >> Monat_1;
	std::cout << "Bitte geben Sie das Jahr des ersten Datums ein:";
	std::cin >> Jahr_1;
	std::cout << "Bitte geben Sie den Tag des zweiten Datums ein:";
	std::cin >> Tag_2;
	std::cout << "Bitte geben Sie den Monat des zweiten Datums ein:";
	std::cin >> Monat_2;
	std::cout << "Bitte geben Sie das Jahr des zweiten Datums ein:";
	std::cin >> Jahr_2;

	if (Jahr_1 == Jahr_2) 
	{
		if (Monat_1 == Monat_2)
		{
			if (Tag_1 == Tag_2) 
			{
				std::cout << "Beide Datumsangaben sind gleich.\n";
			}
			else if (Tag_1 > Tag_2) 
			{
				std::cout << "Das zweite Datum liegt vor dem ersten Datum.\n";
			}
			else if (Tag_2 > Tag_1) 
			{
				std::cout << "Das erste Datum liegt vor dem zweiten Datum.\n";
			}
		}
		else if (Monat_1 > Monat_2) 
		{
			std::cout << "Das zweite Datum liegt vor dem ersten Datum.\n";
		}
		else if (Monat_2 > Monat_1) {
			std::cout << "Das erste Datum liegt vor dem zweiten Datum.\n";
		}
	}
	else if (Jahr_1 > Jahr_2) {
		std::cout << "Das zweite Datum liegt vor dem ersten Datum.\n";
	}
	else if (Jahr_2 > Jahr_1) {
		std::cout << "Das erste Datum liegt vor dem zweiten Datum.\n";
	}
	
	
	system("pause");
	return 0;
}