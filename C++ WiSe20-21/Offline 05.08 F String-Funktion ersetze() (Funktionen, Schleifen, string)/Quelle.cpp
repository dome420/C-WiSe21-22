#include <iostream>
#include <string>
using namespace std;
// ... (ihre Funktion) ...
string ersetze(string zeile, char zu_ersetzendes_zeichen, string ersatztext) 
{
	std::string neuer_text;

	for (size_t pos = 0; pos < zeile.length(); pos++)
	{
		
		if (zeile[pos] == zu_ersetzendes_zeichen)
		{
				neuer_text += ersatztext;
				pos = pos + 1;
		}
		neuer_text += zeile[pos];
		
	}
	return neuer_text;
}
int main()
{
	string s1 = "", s2 = "";
	char c;
	cout << "Bitte geben Sie die Textzeile ein: ? ";
	getline(cin, s1);
	cout << "Bitte geben Sie das zu ersetzende Zeichen ein: ? ";
	cin >> c;
	cin.ignore();
	cout << "Bitte geben Sie den einzusetzenden Text ein: ? ";
	getline(cin, s2);
	cout << "Ergebnis: " << ersetze(s1, c, s2) << endl;
	system("PAUSE");
	return 0;
}