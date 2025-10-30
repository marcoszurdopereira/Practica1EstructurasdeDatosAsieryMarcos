#ifndef NODOPILA_HPP
#define NODOPILA_HPP

#include "Aficionado.hpp"
#include <iostream>
using namespace std;


//en nodopila en vez de almacenar un aficionado,almacenar un puntero a aficionado en nodopila,nodocola nodolista en conclusion Aficionado*v

class NodoPila
{
public:
	NodoPila(Aficionado v,NodoPila*sig=NULL);
	~NodoPila();
	
	
private:
	Aficionado valor;	//Aficionado almacenado
	NodoPila* siguiente; //Puntero al siguiente Nodo
	
	
	friend class Pila;

};

typedef NodoPila* pnodoPila;

#endif // NODOPILA_HPP
