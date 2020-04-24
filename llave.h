/*
Titulo: llave.h
Descripcion: Clase hija de actuadores llamada para las llaves 
Autor: José Miguel Luna Vega A01706424
*/

#ifndef LLAVE_H
#define LLAVE_H

#include "actuador.h"

class Llave: public Actuador{
	
	private:
		
		string id;        
	
	public:
		
		Llave();
		
		Llave(string _nombre, string _funcion, string _id): Actuador(_nombre, _funcion){
		
			id =_id;
		
		}
		
		void abrir(){     //metodo especifico de la clase llave
			
			cout<<"La llave "<<id<<" esta abierta"<<endl;
			
		}
	
};

#endif
