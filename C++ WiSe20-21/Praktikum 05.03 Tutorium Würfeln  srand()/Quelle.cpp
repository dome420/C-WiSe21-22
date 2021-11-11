#include <iostream>
#include <time.h>

int main()
{
	srand(time(NULL));
	int zufallszahl = 0;
	int i = 0;
	int eins = 0, zwei = 0, drei = 0, vier= 0, fünf= 0,sechs = 0;
	while (i != 6000)
	{
		zufallszahl = rand() % 6 + 1;// generiert Zahlen von 1-6
		if (zufallszahl == 1) 
		{
			eins++;
		}
		else if (zufallszahl == 2) 
		{
			zwei++;
		}
		else if (zufallszahl == 3)
		{
			drei++;
		}
		else if (zufallszahl == 4) 
		{
			vier++;
		}
		else if (zufallszahl == 5)
		{
			 fünf++;
		}
		else if (zufallszahl == 6)
		{
			sechs++;
		}
		i++;
	
	}

	std::cout << "Anzahl 1 - er Wuerfe : "<< eins<<std::endl;
	std::cout << "Anzahl 2 - er Wuerfe : "<< zwei<<std::endl;
	std::cout << "Anzahl 3 - er Wuerfe : "<< drei<<std::endl;
	std::cout << "Anzahl 4 - er Wuerfe : "<< vier<<std::endl;
	std::cout << "Anzahl 5 - er Wuerfe : "<< fünf<<std::endl;
	std::cout << "Anzahl 6 - er Wuerfe : "<< sechs << std::endl;
	std::cout << std::endl;
	system("pause");
	return 0;
}