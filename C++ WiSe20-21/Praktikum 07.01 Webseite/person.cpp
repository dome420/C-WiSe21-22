#include "person.h"
#include "texte.h"

Person extrahiere_person(std::string eingabezeile)
{
	Person p;
	std::string rest;
	spalte_ab_erstem(eingabezeile,',', p.nachname, rest);
	spalte_ab_erstem(rest,',', p.vorname, p.geburtsdatum);
	return p;
}