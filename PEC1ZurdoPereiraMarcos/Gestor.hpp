#ifndef GESTOR_HPP
#define GESTOR_HPP

class Gestor

{
public:
	Gestor();
	~Gestor();
	void encolarAficionados();
	
	
private:
	Cola socios;   //Cola para los aficionados que son socios
	Cola simpatizantes;  //Cola para los aficionados que son simpatizantes
};

#endif // GESTOR_HPP
