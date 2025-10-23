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
	
private:
		pnodoPila ultimo;
		int  longitud;

};

#endif // PILA_HPP
