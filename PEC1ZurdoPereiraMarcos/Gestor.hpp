#ifndef GESTOR_HPP
#define GESTOR_HPP

class Gestor

{
public:
	Gestor();
	~Gestor();
	void genera10Aficionados();//metodo opcion A
	void muestraAficionados();//metodo opcion B
    void borraAficionadosPila();//metodo opcion C
    void encolarAficionados();//metodo opcion D
    void muestraSociosCola();//metodo opcion E
    void muestraSimpatizantesCola();//metodo opcion F
    void borraAficionadosColas();//metodo opcion G
    void enlistarAficionados();//metodo opcion H
    void buscarAficionados();//metodo opcion I
    void reiniciar();//metodo opcion J
	void salirdelPrograma();//metodo opcion S
	
	
private:
	Pila pilaAficionados;  //Pila para los aficionados
	Cola colasocios;   //Cola para los aficionados que son socios
	Cola colasimpatizantes;  //Cola para los aficionados que son simpatizantes
	Lista listaEstadio;     //Lista de acceso al estadio
	
};

#endif // GESTOR_HPP
