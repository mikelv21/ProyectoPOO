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
		
		 //Constructor por default
		Bomba(): Actuador("Vacio"){};           
		
		Bomba(string _nombre): Actuador(_nombre){
		}
		
		//Metodo especifico de la clase bomba
		
		void bombeando(){       
			
			cout<<"La bomba esta activa."<<endl;
			
		}
	
};

#endif
