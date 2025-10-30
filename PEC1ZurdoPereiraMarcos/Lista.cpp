#include "Lista.hpp"

Lista::Lista()//constructor
{
	primero=NULL;
	ultimo=NULL;
	longitud=0;
}

// Verifica si la lista está vacía
bool Lista::estaVacialalista() {
    return primero == nullptr;
}


// Mostrar todos los aficionados
void Lista::mostrar() {
    pnodoLista actual = primero;
    while (actual != nullptr) {
        actual->valor.mostrar();
        actual = actual->siguiente;
    }
}

// Inserta al inicio
void Lista::insertarporIzquierda(Aficionado v) {
    pnodoLista nuevo = new NodoLista(v, primero);
    if (estaVacialalista())
        ultimo = nuevo;
    primero = nuevo;
    longitud++;
}

// Inserta al final
void Lista::insertarporDerecha(Aficionado v) {
    pnodoLista nuevo = new NodoLista(v);
    if (estaVacialalista()) {
        primero = ultimo = nuevo;
    } else {
        ultimo->siguiente = nuevo;
        ultimo = nuevo;
    }
    longitud++;
}


// Inserta ordenado por hora de llegada
void Lista::insertarenOrden(Aficionado v) {
    pnodoLista nuevo = new NodoLista(v);

    // Si la lista está vacía o el nuevo llega antes que el primero
    if (estaVacialalista() || v.gethorallegadaminutos() < primero->valor.gethorallegadaminutos()) {
        nuevo->siguiente = primero;
        primero = nuevo;
        if (ultimo == nullptr)
            ultimo = nuevo;
        longitud++;
        return;
    }

    // Recorremos la lista hasta encontrar la posición correcta
    pnodoLista actual = primero;
    while (actual->siguiente != nullptr &&
           actual->siguiente->valor.gethorallegadaminutos() <= v.gethorallegadaminutos()) {
        actual = actual->siguiente;
    }

    nuevo->siguiente = actual->siguiente;
    actual->siguiente = nuevo;
    if (nuevo->siguiente == nullptr)
        ultimo = nuevo;

    longitud++;
}





// Borra el primer nodo y devuelve el Aficionado eliminado
Aficionado Lista::eliminar() {
    if (estaVacialalista()) {
        cerr << "Lista vacía, no se puede borrar.\n";
        return Aficionado(); // Devuelve un Aficionado por defecto
    }

    pnodoLista temp = primero;
    Aficionado eliminado = temp->valor;

    primero = primero->siguiente;
    if (primero == nullptr)
        ultimo = nullptr;

    delete temp;
    longitud--;

    return eliminado;
}


Lista::~Lista()
{
	while(primero)
		eliminar();
}

