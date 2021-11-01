#include <iostream>

int main() {

	int my_arr[9] = {}, eingabe = 0, haeufigkeit = 0;
	int vergleichs_arr[6]  = { 1,2,3,4,5,6 };

	for (size_t pos = 0; pos < 9; pos++)
	{
		do
		{
			std::cout << "Bitte geben Sie die " << pos + 1 << ". Zahl ein: ? ";
			std::cin >> eingabe;
			my_arr[pos] = eingabe;
		} while (eingabe < 1 && eingabe > 6 );
	}
	for (size_t i = 0; i < 9; i++)
	{
		std::cout << "Die " << i+1<<". eingegebene Zahl lautete: " << my_arr[i] << std::endl;
	}

	for (size_t v_zahl = 0; v_zahl < 6; v_zahl++)
	{
		for (size_t pos = 0; pos < 9; pos++)
		{
			if (v_zahl + 1 == my_arr[pos]) {
				haeufigkeit++;
			}

		}
		vergleichs_arr[v_zahl] = haeufigkeit;
		haeufigkeit = 0;
	}

	for (size_t i = 0; i < 6; i++)
	{
		std::cout << "Die Zahl " << i + 1 << " wurde " << vergleichs_arr[i] << " mal eingegeben.\n";
	}

	system("pause");
	return 0;

}