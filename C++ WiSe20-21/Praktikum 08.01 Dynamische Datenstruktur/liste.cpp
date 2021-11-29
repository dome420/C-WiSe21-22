// Datei: liste.cpp

#include <string>
#include "liste.h"

std::string liste_als_string(TListenKnoten* anker)
{
	std::string resultat = "";

	if (anker == nullptr)
		return "Leere Liste.";
	else
	{
		resultat += "[ ";
		TListenKnoten* ptr = anker;
		do
		{
			resultat += std::to_string(ptr->data);

			if (ptr->next != nullptr) resultat += " , ";
			else resultat += " ";

			ptr = ptr->next;
		} while (ptr != nullptr);
		resultat += "]";
	}

	return resultat;
}

// Wird modifiziert in Aufgabe INF-08.01 ...
void hinten_anfuegen(TListenKnoten *&anker, const int wert)
{
	TListenKnoten *neuer_eintrag = new TListenKnoten;
	neuer_eintrag->data = wert;
	neuer_eintrag->next = nullptr;
	neuer_eintrag->prev = nullptr;

	if (anker == nullptr)
		anker = neuer_eintrag;
	else
	{
		TListenKnoten *ptr = anker;
		while (ptr->next != nullptr)
		{
			ptr = ptr->next;
		}
		ptr->next = neuer_eintrag;
		neuer_eintrag->prev = ptr;
	}
}
// Aufgabe 08.02
std::string liste_als_string_rueckwaerts(TListenKnoten* anker) 
{
	std::string resultat = "";
	if (anker == nullptr)
		return "Leere Liste.";
	else
	{
		resultat += "[ ";
		TListenKnoten* ptr = anker;
		while (ptr->next != nullptr) ptr = ptr->next;
		do
		{
			resultat += std::to_string(ptr->data);

			if (ptr->prev != nullptr) resultat += " , ";
			else resultat += " ";
			ptr = ptr->prev;
		} while (ptr != nullptr);
		resultat += "]";
	}
	return resultat;
}
// 08.03
void in_liste_einfuegen(TListenKnoten*& anker, int wert_neu, int vor_wert)
{
	TListenKnoten* ptr = new TListenKnoten;
	TListenKnoten* tmp = anker;

	ptr->data = wert_neu;
	ptr->next = nullptr;
	ptr->prev = nullptr;
	bool gefunden = false;

	// Liste leer weil anker den wert vom nullptr hat
	if (anker == nullptr)
	{
		anker = ptr;
	}
	else
	{ // liste besteht mindestens aus einem knoten
		if (tmp->data== vor_wert && tmp->prev == nullptr)
		{

			tmp->prev = ptr;
			ptr->next = tmp;
			anker = ptr; // ptr wird zum ersten knoten
		}
		else
		{
			while (tmp->next != nullptr) // solang der letzte knoten nicht auf den nullptr zeit
			{
				if (tmp->data == vor_wert)
				{
					// Tausch mitten drin
					tmp->prev->next = ptr;
					ptr->prev = tmp->prev;
					ptr->next = tmp;
					tmp->prev = ptr;
					gefunden = true;
					break;
				}
				else
				{
					tmp = tmp->next;
				}
			}
			if (gefunden == false)
			{
				if (tmp->data == vor_wert)
				{
					tmp->prev->next = ptr;
					ptr->prev = tmp->prev;
					ptr->next = tmp;
					tmp->prev = ptr;
					gefunden = true;
				}
				else if (tmp->next == nullptr && tmp->prev == nullptr)
				{
					tmp->next = ptr;
					ptr->prev = tmp;
				}
				else // wir sind am ende der liste und wert wurde nicht gefunden
				{
					ptr->prev = tmp;
					tmp->next = ptr;
				}
			}
		}
	}
}
void aus_liste_loeschen(TListenKnoten*& anker, int wert)
{
	TListenKnoten* tmp = anker;
	bool gefunden = false;
	if (anker != nullptr) 
	{
		if (tmp->data == wert && tmp->next == nullptr) 
		{
			anker = nullptr;
			tmp->prev = nullptr;
		}
		else if (tmp->data == wert) 
		{
			anker = tmp->next;
			tmp->next->prev = nullptr;
		}
		else
		{
			while (tmp->next != nullptr)
			{
				if (tmp->data == wert)
				{
					tmp->prev->next = tmp->next;
					tmp->next->prev = tmp->prev;
					gefunden = true;
					break;
				}
				else
				{
					tmp = tmp->next;
				}
			}
			if (gefunden == false && tmp->next == nullptr && tmp->data == wert) 
			{
				tmp->prev->next = nullptr;
				tmp->prev = nullptr;
			}
		}
	}
}