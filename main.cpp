#include <iostream>
#include <map>

#include "fonction.hpp"

using namespace std;
 
int main()
{
//char a;

map<char, void (*) (void) > lol;


lol['a'] = test;
lol['+'] = test1;

char j;
cin >> j;
/*
if (j == lol.find(j))
{
	(*pointeurSurFonction)();
}
*/

for(map<char, void (*) (void)>::iterator it=lol.begin() ; it!=lol.end(); ++it)
{

	if(j == it->first)
	{
		
		(*it->second) ();
		
	} 
}


//(*pointeurSurFonction)();

return 0;
}



/*
{
    it->first; // accede à la clé
    it->second; // accede à la valeur
}
*/


