/*
Titulo: llave.h
Descripcion: Clase hija de actuadores llamada para las llaves 
Autor: Jos� Miguel Luna Vega A01706424
*/

#ifndef LLAVE_H
#define LLAVE_H

#include "actuador.h"

class Llave: public Actuador{
	
	private:
		
		string id;        
	
	public:
		
		Llave(): Actuador("Vacio"), id("Vacio"){};              //Constructor default
		
		Llave(string _id): Actuador("Vacio"), id(_id){};         //Constructor default
		
		Llave(string _nombre, string _id): Actuador(_nombre){
		
			id =_id;
		
		}
		
		void abrir(){     //metodo especifico de la clase llave
			
			cout<<"La llave "<<id<<" esta abierta"<<endl;
			
		}
	
};

#endif
