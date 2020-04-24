/*
Titulo: bomba.h
Descripcion: Clase hija de actuadores llamada para las llaves 
Autor: José Miguel Luna Vega A01706424
*/

#ifndef BOMBA_H
#define BOMBA_H

#include "actuador.h"

class Bomba: public Actuador{
	
	public:
		
		Bomba();
		
		Bomba(string _nombre, string _funcion): Actuador(_nombre, _funcion){
		}
		
		void bombeando(){        //metodo especifico de la clase bomba
			
			cout<<"La bomba esta activa."<<endl;
			
		}
	
};

#endif
