// Offline 04.01 F Aufz�hlung r�ckw�rts.cpp : Diese Datei enth�lt die Funktion "main". Hier beginnt und endet die Ausf�hrung des Programms.
//

#include <iostream>

int main()
{
	for (int i = 50; i >= 0; i = i - 5)
	{
		std::cout << i << std::endl;
	}
	system("pause");
	return 0;
}