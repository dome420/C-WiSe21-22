#include <iostream>
#include <string>

using namespace std;

string trimme(string s)
{
	string neuer_text,neuer_text_2;
	int neue_pos_vorne = 0, neue_pos_hinten = 0;
	bool gefunden = false, alles_kreuz = false;

	// Vorne
	for (size_t pos_index= 0; pos_index < s.length(); pos_index++)
	{
		if (s[pos_index]!= '+') 
		{
			neue_pos_vorne = pos_index;
			gefunden = true;
			break;
		}
	}
	//kopieren
	if (gefunden)
	{
		for (unsigned pos = neue_pos_vorne; pos < s.length(); pos++)
		{
			neuer_text += s[pos];
		} 
	}
	
	neue_pos_vorne = 0; // nullsetzten für neuen String pos
	// Hinten
	for (size_t pos_index = neuer_text.length()-1; pos_index > neue_pos_vorne; pos_index--)
	{
		if (neuer_text[pos_index] != '+')
		{
			neue_pos_hinten = pos_index;
			break;
		}
	}

	for (; neue_pos_vorne <= neue_pos_hinten; neue_pos_vorne++)
	{
		neuer_text_2 += neuer_text[neue_pos_vorne];
	}

	return neuer_text_2;
}

int main()
{
	string s = "";

	cout << "Bitte geben Sie die Textzeile ein: ? ";
	getline(cin, s);

	cout << "Vorher: " << s << endl;
	cout << "Nachher: " << trimme(s) << endl;
	system("PAUSE");
	return 0;
}