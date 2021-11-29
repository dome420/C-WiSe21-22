#include "suchen_rekursiv.h"

using namespace std;
// Text abcabcdef, Zeichenkette abcd
int zeichenkette_suchen_rekursiv(std::string text, std::string zkette, unsigned int text_pos, unsigned int text_such_pos, unsigned int zkette_such_pos)
{
    if (zkette_such_pos < zkette.length())
    {
        if (text[text_pos] == zkette[zkette_such_pos]) 
        {
            text_such_pos = text_pos;
            text_such_pos++;
            zkette_such_pos++;
           
        }
        else if(text[text_pos] != zkette[zkette_such_pos]) // buchstabe ungleich
        {
            text_such_pos = 0;
            zkette_such_pos = 0;
        }
        zeichenkette_suchen_rekursiv(text, zkette, text_pos, text_such_pos, zkette_such_pos);
        text_pos++;
    }
    return text_pos;
}