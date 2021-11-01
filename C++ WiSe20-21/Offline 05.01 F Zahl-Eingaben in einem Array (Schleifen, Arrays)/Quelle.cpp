#include <iostream>



int main()
{

	int my_arr[9] = {};
	int eingabe = 0;
	for (size_t i = 0; i < 9; i++)
	{
		do
		{
			std::cout << "Bitte geben Sie die " << i+1 << ". Zahl ein: ? ";
			std::cin >> eingabe;
			my_arr[i] = eingabe;
		} while (eingabe < 0 && eingabe > 9);
	}

	for (size_t i = 0; i < 9; i++)
	{
		std::cout << "Die " << i+1 << ". eingegebene Zahl lautete: " << my_arr[i] << std::endl;
	}

	system("pause");
	return 0;
}