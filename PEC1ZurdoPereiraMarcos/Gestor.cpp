#include "Gestor.hpp"

Gestor::Gestor()  //Constructor
{
}

Gestor::~Gestor() //Destructor
{
}


void Gestor::encolarAficionados(){   //metodo para distribuir los aficionados segun su tipo(socio,simpatizante)
	if(aficionado.esSocio())
		socios.encolar(aficionado);	
		
		
	else
		simpatizante.encolar(aficionado);
	 	
		
}
