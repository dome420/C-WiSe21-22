#include <iostream>

int main() 
{

	int my_arr[9] = {};
	int eingabe = 0, unterschiedlich = 1, gleich = 0;

	unsigned zaehler_v = 0, zaehler_h = 8;

	// Eingabe 
	for (unsigned pos = 0; pos < 9; pos++)
	{
		do
		{
			std::cout << "Bitte geben Sie die "<<pos+1<<". Zahl ein: ? ";
			std::cin >> eingabe;
			my_arr[pos] = eingabe;
		} while (eingabe < 1 || eingabe > 6);
	}

	int durchgang = 1;
	for (size_t i = 0; i < 9; i++)
	{
		for (size_t pos_index = i+1; pos_index < 9; pos_index++)
		{
			if (my_arr[i] != my_arr[pos_index]) 
			{
				unterschiedlich++;
			}
		}
		//Prüfung ob die zahl shconmal vorkam
		if (i > 0) 
		{
			for (size_t pos_index = i - 1; pos_index > 0; pos_index--)
			{
				if (my_arr[i] == my_arr[pos_index])
				{
					unterschiedlich--;
				}
			}
		}
	}

	std::cout << "In der Eingabe kamen "<<unterschiedlich / 8 <<" unterschiedliche Zahlen vor.\n";

	system("pause");
	return 0;
}