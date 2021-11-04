#include <iostream>

int main() {
	int eingabe = 0, gross = 0, klein = 0;
	int g_pos = 0, k_pos = 0;

	for (size_t i = 1; i < 6; i++)
	{
		std::cout << "Bitte geben Sie die " << i << ". Zahl ein: ? ";
		std::cin >> eingabe;
		if (i == 1) 
		{
			gross = klein = eingabe;
			g_pos = i;
			k_pos = i;
		}
		else if(eingabe > gross)
		{
			gross = eingabe;
			g_pos = i;
		}
		else if( eingabe < klein)
		{
			klein = eingabe;
			k_pos = i;
		}
	}
	std::cout << "Die " << k_pos << ". Zahl war die kleinste der eingegebenen Zahlen und lautet: " << klein << std::endl;
	std::cout << "Die " << g_pos << ". Zahl war die groesste der eingegebenen Zahlen und lautet: " << gross << std::endl;

	system("pause");
	return 0;

}