#include <iostream>
#include <string>

int main() 
{
	//gelöstes“ Sudoku einliest
	int sudoku[9][9] = { 0 };

	std::string eingabe[11] = { "" };

	//einlesen
	std::cout << "Bitte geben Sie das Sudoku ein: ";
	for (size_t pos = 0; pos < 11; pos++)
	{

		std::getline(std::cin,eingabe[pos]);
	}

	//im int sudoku_array abspeichern
	int x = 0;
	for (size_t x_achse = 0; x_achse < 11; x_achse++)
	{
		if (x_achse != 3 && x_achse != 7)
		{
			int y = 0;
			for (rsize_t y_achse = 0; y_achse < 22; y_achse++)
			{
				if (eingabe[x_achse][y_achse] >= '1' && eingabe[x_achse][y_achse] <= '9')
				{
					sudoku[x][y] = eingabe[x_achse][y_achse] - '0';
					y++;
				}
			}
		}
	
	}
	// Ausgabe
	std::cout << "Sudoku lautet: " << std::endl;
	for (size_t y = 0; y < 9; y++)
	{
		if(y != 3 && y != 6)
		{
			for (size_t x = 0; x < 9; x++)
			{
				if (x != 3 && x != 6)
				{
					std::cout << ";" << sudoku[y][x];
				}
				else {
					std::cout << ";//" << ";" << sudoku[y][x];;
				}
			}
		}
		else
		{
			std::cout << "=======//=======//======= " << std::endl;
			for (size_t x = 0; x < 9; x++)
			{
				if (x != 3 && x != 6)
				{
					std::cout << ";" << sudoku[y][x];
				}
				else {
					std::cout << ";//" << ";" << sudoku[y][x];;
				}
			}
		}
		std::cout << std::endl;
	}
	system("pause");
	return 0;
}