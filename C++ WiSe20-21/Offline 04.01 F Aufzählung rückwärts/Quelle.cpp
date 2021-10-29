// Offline 04.01 F Aufzählung rückwärts.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
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