#include "Pila.hpp"

Pila::Pila()
{
	ultimo=NULL;
	longitud = 0;
	
	
}
void Pila::insertar(Aficionado v)
{   
	
	pnodoPila nuevo;
	nuevo= new NodoPila(v,ultimo);
	ultimo=nuevo;
	longitud++;
}

Aficionado Pila::extraer()
{
	pnodoPila nodo;
	Aficionado v;
	if(!ultimo)
		return 0;
	nodo=ultimo;
	ultimo=nodo->siguiente;
	v=nodo->valor;
	longitud--;
	delete nodo;
	return v;
}

Aficionado Pila::cima() //El tipo de metodo depende si devuelve algo ,si no devuelve es void,en otro caso Aficionado
{
	pnodoPila nodo;
	if(!ultimo)
		return 0;
	return ultimo->valor;	
}

void Pila::mostrar()
{
		pnodoPila aux = ultimo;
		cout <<"\El contenido de la pila es : ";
     	while(aux){
			cout <<"->" << aux->valor;
			aux=aux->siguiente;
		}
		cout << endl;
}

Aficionado Pila::getLongitud()
{
		return this->longitud;
}


Pila::~Pila()
{
		pnodoPila aux;
		while(ultimo){
			aux=ultimo;
			ultimo=ultimo->siguiente;
			delete aux;
		}
			
}

