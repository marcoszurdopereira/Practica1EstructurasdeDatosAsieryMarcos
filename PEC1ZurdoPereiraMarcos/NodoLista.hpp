#ifndef NODOLISTA_HPP
#define NODOLISTA_HPP


#include "Aficionado.hpp"
#include <iostream>
using namespace std;



class NodoLista
{
public:
	NodoLista(Aficionado v,NodoLista*sig=NULL);
	~NodoLista();



private:
	Aficionado valor;
	NodoLista* siguiente;
	
	
	friend class Lista;
};


typedef pnodoLista* NodoLista;
#endif // NODOLISTA_HPP
