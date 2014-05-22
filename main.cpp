#include <iostream>
#include <map>

#include "fonction.cpp"

using namespace std;
 
int main()
{
//char a;

void (*pointeurSurFonction)(void);
pointeurSurFonction = test;

map<char, void*> lol;


lol['a'] = &pointeurSurFonction;

char j;

(*pointeurSurFonction)();

return 0;
}


//fct.cpp

#include <iostream>

using namespace std;
 
void test ()
{
cout << "WALLAH ça marche bien";
}
