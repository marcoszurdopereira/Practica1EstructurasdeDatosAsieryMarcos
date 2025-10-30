#include "Gestor.hpp"

Gestor::Gestor()  //Constructor
{
}

Gestor::~Gestor() //Destructor
{
}

void Gestor::genera10Aficionados(){//primer metodo,generará 10 aficionados aleatorios//REVISARRRRRRRRRRR  //METODO OPCION A
	
	for (int i=1;i<=10,i++){
		int identificador_unico = rand() % 10 + 1;           // Identificador único aleatorio entre 1 y 10
        Aficionado a(identificador_unico);                  // Crear objeto Aficionado con el ID
        a.sethorallegadaminutos(rand() % 60);               // Asignar hora de llegada aleatoria 0-59
        bool es_socio = (a.getidentificador_unico() % 2 == 0);// Si el ID es par → socio, si es impar → simpatizante
		a.setesSocio(es_socio);// Asignamos al atributo esSocio del aficionado

        pilaAficionados.push(a);     //Guardar en la Pila
	}
}
	
void Gestor::muestraAficionados(){//esta opción mostrará todos los aficionados almacenados en la pila.    //METODO OPCION B
	pilaAficionados.mostrar();	
}

		
		
void Gestor::borraAficionadosPila() { //esta opción borrará todos los aficionados almacenados en la pila y generados en la opción A  //METODO OPCION C
    cout << "Vaciando la pila de aficionados..." << endl;
    pilaAficionados.vaciar(); // Llamamos al método vaciar de la pila
    cout << "Pila vacía." << endl;
}		

void Gestor::encolarAficionados(){//este metodo extrae aficionados de la pila y los almacena segun su tipo en las colas.    //METODO OPCION D
	cout << "Encolando aficionados desde la pila..." << endl;
	while(!pilaAficionados.estaVacia())
	{
		Aficionado v=pilaAficionados.extraer();
		
		//comprobamos su tipo
		
		if (v.getesSocio())
		{
			colasocios.insertar(v);
		}
		else
		{
			colasimpatizantes.insertar(v);
		}
		
	}
	cout <<"Todos los aficionados han sido encolados correctamente." << endl;
	
}


void Gestor::muestraSociosCola(){  //este metodo  mostrara la cola de aficionados que son socios           //METODO OPCION E
	cout << "Mostrando la cola de aficionados que son socios..." << endl;
	colasocios.mostrar();
	cout << "Cola de socios mostrada correctamente..." << endl;
}

void Gestor::muestraSimpatizantesCola(){             //METODO OPCION F
	cout << "Mostrando la cola de aficionados que son simpatizantes..." << endl;
	colasimpatizantes.mostrar();
	cout << "Cola de simpatizantes mostrada correctamente..." << endl;
}

void Gestor::borraAficionadosColas(){           //METODO OPCION G
	cout << "borrando los aficionados almacenados en ambas colas..." << endl;
	colasocios.eliminar();
	colasimpatizantes.eliminar();
	cout << "Ambas colas eliminadas correctamente..." << endl;

}

//METODO OPCION H
void Gestor::enlistarAficionados(){
	cout << "\nInsertando aficionados en la lista ordenada..." << endl;
	// Primero los socios
    while (!colaSocios.estaVacia()) {
        Aficionado v = colaSocios.desencolar();
        lista.insertarenOrden(v);
    }
	
	// Luego los simpatizantes
    while (!colaSimpatizantes.estaVacia()) {
        Aficionado v = colaSimpatizantes.desencolar();
        lista.insertarenOrden(v);
    }

	
	
}

void Gestor::reiniciarPrograma() {//METODO OPCION J
    cout << "\n Reiniciando el programa...\n";

    // Vaciar la lista de aficionados actual
    listaestadio.vaciar();

    // Generar de nuevo los 10 aficionados iniciales
    genera10Aficionados();

    cout << " Programa reiniciado al estado inicial.\n";
}


//METODO OPCION A,I


void Gestor::salirdelPrograma(){  //METODO OPCION S,(SALIR DEL PROGRAMA)
	cout << "Saliendo del programa..." << endl;
    exit(0); // Termina la ejecución del programa
}