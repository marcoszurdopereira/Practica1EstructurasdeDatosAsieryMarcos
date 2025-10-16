#include "Aficionado.hpp"

Aficionado::Aficionado(int identificador_unico, int horallegadaminutos, bool esSocio)
    {
    this->identificador_unico = identificador_unico;
    this->horallegadaminutos = horallegadaminutos;
    this->esSocio = esSocio;
	}
	// Getter identificador único
int Aficionado::getidentificador_unico() {
    return identificador_unico;
}

// Getter hora llegada en minutos
int Aficionado::gethorallegadaminutos() {
    return horallegadaminutos;
}

// Getter es socio
bool Aficionado::getesSocio() {
    return esSocio;
}

// Setter identificador único
void Aficionado::setidentificador_unico(int identificador_unico) {
    this->identificador_unico = identificador_unico;
}

// Setter hora llegada en minutos
void Aficionado::sethorallegadaminutos(int horallegadaminutos) {
    this->horallegadaminutos = horallegadaminutos;
}

// Setter es socio
void Aficionado::setesSocio(bool esSocio) {
    this->esSocio = esSocio;
}

// Método mostrar
void Aficionado::mostrar() {
    cout << "Identificador: " << identificador_unico << endl;
    cout << "Hora llegada (min): " << horallegadaminutos << endl;
    cout << "Es socio: " << (esSocio ? "Sí" : "No") << endl;
}




Aficionado::~Aficionado() //Esto de aqui es el destructor
{
}

