#ifndef PILE_HPP
#define PILE_HPP
#include <iostream>
#include <map>
#include <functional>
using namespace std;

template <typename Type> class Pile
{
	private:
		unsigned int taillePile;
		Type *pile;
		unsigned int sommet;
	public:
		Pile(unsigned taille=100);
		Pile(const Pile&);
		inline ~Pile() {delete [] pile;};
		void empiler();
		void empiler(double);
		Type depiler();
		inline unsigned int compter()const {return sommet;};
		void afficher() const;
		void realloc();
		
		void addition(Pile &);       //marche
};

template <typename Type>
Pile <Type>::Pile(unsigned taille)
	:taillePile(taille), pile(NULL),sommet(0)
	{
		pile = new Type[taillePile];
	}
	
template <typename Type>
Pile <Type>::Pile(const Pile & pile1)
	:taillePile(pile1.taillePile), pile(NULL),sommet(pile1.sommet)
	{
		pile = new Type[taillePile];
	}

template <typename Type>
void Pile <Type>::empiler(void)
{
	char c;
	cin >> c;

	if(sommet < taillePile)
	{
		pile[sommet++]=c;
		cout << "Nombre bien empilé"<<endl;
	}
	else
	{
		cerr << "Pile pleine !";
	}
}

template <typename Type>
void Pile <Type>::empiler(double c)
{
	if(sommet < taillePile)
	{
		pile[sommet++]=c;
		cout << "Nombre bien empilé"<<endl;
	}
	else
	{
		cerr << "Pile pleine !";
	}
}


template <typename Type>
Type Pile <Type>::depiler(void)
{
	if(sommet>0)
		return pile[--sommet];
	else
	{
		cerr << "Pile vide !";
	}
}


template <typename Type>
void Pile <Type>::afficher(void) const
{
	cout << endl <<"[ ";
	
	for(unsigned int i=0 ; i<sommet ; i++)
	{
		 cout << pile[i] ;
	}
	cout << " ]" << endl;
}

template <typename Type>
void Pile<Type>::addition(Pile & pile1)
{	
	double resultat;
	double nb_1 = pile1.depiler();
	double nb_2 = pile1.depiler();
    resultat = nb_1+nb_2;
    pile1.empiler(resultat);

}
#endif
