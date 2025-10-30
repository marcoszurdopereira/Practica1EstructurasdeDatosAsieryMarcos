#ifndef LISTA_HPP
#define LISTA_HPP

class Lista
{
public:
    Lista();
    ~Lista();
    void insertarporIzquierda(Aficionado v);
    void insertarporDerecha(Aficionado v);
    void insertarenOrden(Aficionado v);

    Aficionado eliminar();
	

    void mostrar();
	bool estaVacialalista();
	
	
	
	
private:
		pnodoLista primero,ultimo;
		
		int longitud();
};

#endif // LISTA_HPP.
