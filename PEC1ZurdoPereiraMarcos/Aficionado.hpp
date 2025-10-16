#ifndef AFICIONADO_HPP
#define AFICIONADO_HPP



#include <iostream>
using namespace std;



class Aficionado
{
public:
	//Constructor
	Aficionado(int identificador_unico,int horallegadaminutos,bool esSocio);
	// Métodos get
    int getidentificador_unico();
    int gethorallegadaminutos();
	bool getesSocio();

    // Métodos set
    void setidentificador_unico(int identificador_unico);
    void sethorallegadaminutos(int horallegadaminutos);
	void setesSocio(bool esSocio);

    // Método para mostrar los datos
    void mostrar();
	~Aficionado();
	
	
	private:
		int identificador_unico; //atributo para el identificador unico del aficionado.
		int horallegadaminutos; //atributo para la hora de llegada que sera expresada en minutos y empezara desde las 18:00 horas.
		bool esSocio;          //atributo booleano que nos indica si el aficionado es socio o no.

};

#endif // AFICIONADO_HPP
