#ifndef PILA_HPP
#define PILA_HPP

class Pila
{
public:
	Pila();
	~Pila();
	void insertar(Aficionado v);
	Aficionado extraer ();
	Aficionado cima ();
	void mostrar();
	Aficionado getLongitud();
	void vaciar();  // metodo para vaciar la pila
	bool estaVacia();//nos permite saber si la pila esta vacia
	
private:
		pnodoPila ultimo;
		int  longitud;

};

#endif // PILA_HPP
