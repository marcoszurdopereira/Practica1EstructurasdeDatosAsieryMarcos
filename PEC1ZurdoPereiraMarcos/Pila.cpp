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

void Pila::vaciar()  //metodo para vaciar toda la pila
{
    // Mientras haya elementos en la pila...
    while (ultimo != nullptr)
    {
        extraer();  // ...vamos extrayendo (y eliminando) uno a uno //es llamar al metodo extraer que saca un aficionado de la pila cada vez que se le llama
    }

    // Cuando el bucle termina, la pila está completamente vacía
    cout << "Todos los aficionados han sido eliminados de la pila." << endl;
}



bool Pila::estaVacia(){   //Permite saber si la pila tiene elementos sin tocarla
    return ultimo == nullptr;
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

