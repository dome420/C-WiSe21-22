#include <iostream>
using namespace std;


int addition_rekursiv(int i, int k)
{
	// � Ihr Code hier �
	if (k == 1) 
	{
		return i + k;
	}
	else
	{
		return  addition_rekursiv(i+1, k - 1);
	}
	
	
	
}

int subtraktion_rekursiv(int i, int k)
{
	// � Ihr Code hier �
	if (k == 1)
	{
		return i - k;
	}
	else
	{
		return  subtraktion_rekursiv(i - 1, k - 1);
	}
}

int main()
{
	int i = 0, k = 0;
	cout << "Bitte geben Sie die erste Zahl ein: ? ";
	cin >> i;
	cout << "Bitte geben Sie die zweite Zahl ein: ? ";
	cin >> k;
	cout << i << " + " << k << " = "
		<< addition_rekursiv(i, k) << endl;
	cout << i << " - " << k << " = "
		<< subtraktion_rekursiv(i, k) << endl;
	system("PAUSE");
	return 0;
}