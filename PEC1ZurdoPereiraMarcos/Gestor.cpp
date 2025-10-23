#include "Gestor.hpp"

Gestor::Gestor()  //Constructor
{
}

Gestor::~Gestor() //Destructor
{
}

void Gestor::genera10Aficionados(){//primer metodo,generará 10 aficionados aleatorios
	
	for (int i=1;i<=10,i++){
		int identificador_unico = rand() % 10 + 1;           // Identificador único aleatorio entre 1 y 10
        Aficionado a(identificador_unico);                  // Crear objeto Aficionado con el ID
        a.sethorallegadaminutos(rand() % 60);               // Asignar hora de llegada aleatoria 0-59
        bool es_socio = (a.getidentificador_unico() % 2 == 0);// Si el ID es par → socio, si es impar → simpatizante
		a.setesSocio(es_socio);// Asignamos al atributo esSocio del aficionado

        pilaAficionados.push(a);     //Guardar en la Pila
	}
}
	
void Gestor::muestraAficionados(){//esta opción mostrará todos los aficionados almacenados en la pila.
	pilaAficionados.mostrar();	
}

		
		
void Gestor::borraAficionadosPila() { //esta opción borrará todos los aficionados almacenados en la pila y generados en la opción A
    cout << "Vaciando la pila de aficionados..." << endl;
    pilaAficionados.vaciar(); // Llamamos al método vaciar de la pila
    cout << "Pila vacía." << endl;
}		


