#include <iostream>
#include <string>
#include <fstream>
#include "person.h"

using namespace std;
string br(string s)
{
	string fertig = s + "<br/>";
	return fertig;
}
string b(string s) 
{
	string fertig = "<b>" + s + "</b>";
	return fertig;
}
string ersetze(string eingabezeile, char zeichen, string text) 
{
	if (eingabezeile == "")
	{
		return eingabezeile;
	}
	else
	{
		for (size_t i = 0; i < eingabezeile.length(); i++)
		{
			if (eingabezeile.at(i) == zeichen)
			{
				eingabezeile = text;
				break;
			}
		}
	}
	return eingabezeile;
}

int main()
{
	string eingabezeile, kurztext,langtext;
	Person person;
	//Datendatei "personendaten.txt" als textuelle Eingabedatei öffnen;
	fstream file("personendaten.txt", ios::in);

	/*
	solange(eingabezeile aus Datendatei lesen) 
	{
		eingabezeile ausgeben;
	}
	*/
	while(getline(file,eingabezeile))
	{
		person = extrahiere_person(eingabezeile);
		kurztext += br(b(person.nachname) + ", " + person.vorname+  "\n");
		langtext += br(b(person.vorname + " " + person.nachname) +", " +person.geburtsdatum + "\n");
		
	
		//cout << eingabezeile << endl;
	}
	// Ausagabe
	cout << kurztext;
	cout <<langtext;
	//Datendatei schließen;
	file.close();

	fstream html("webseite.html.tmpl", ios::in); //vorlage
	fstream demo("demo.html", ios::out);  // demo
	
	while (getline(html,eingabezeile))
	{
		eingabezeile = ersetze(eingabezeile, '%', kurztext);
		eingabezeile = ersetze(eingabezeile, '$', langtext);
		
		demo << eingabezeile  << "\n";

	}
	html.close();
	demo.close();
	system("pause");
	return 0;
}