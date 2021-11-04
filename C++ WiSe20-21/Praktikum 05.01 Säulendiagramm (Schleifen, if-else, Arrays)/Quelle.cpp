#include <iostream>

int main()
{
	int my_arr[5] = {};
	int eingabe = 0;

	//einlesen
	for (size_t i = 0; i < 5; i++)
	{
		do
		{
			std::cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
			std::cin >> eingabe;
			my_arr[i] = eingabe;
		} while (eingabe < 1 | eingabe > 9);
	}
	// ausgeben
	for (size_t i = 9; i > 0; i--)
	{
		std::cout << i;
		for (size_t pos_index = 0; pos_index < 5; pos_index++)
		{
			if (my_arr[pos_index] == i)
			{
				std::cout << '*';
			}
			else if(my_arr[pos_index] < i)
			{
				std::cout << '.';
			}
			else if (my_arr[pos_index] > i)
			{
				std::cout << '+';
			}
		}
		std::cout << std::endl;
	}
	system("pause");
	return 0;
}