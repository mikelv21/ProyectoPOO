/*
Titulo: frutal.h
Descripcion: Clase hija de plantas llamada frutal
Autor: José Miguel Luna Vega A01706424
*/

#ifndef FRUTAL_H
#define FRUTAL_H

#include "planta.h"

class Frutal: public Planta{
	
	private:
		
		string fruto;        //atributos especificos de las plantas frutales
		float maduracion;
		
	public: 
		
		Frutal();
		
		Frutal(string _id, string _tipo, int _tiempoR, int _frecR, string _fruto, float _maduracion)
		:Planta(_id,_tipo,_tiempoR,_frecR){
		
			fruto = _fruto;
			maduracion = _maduracion;
			
		}
		 
		void consultaMaduracion(){        //metodo unico de la planta frutal
			
			cout<<"El fruto es: "<<fruto<<endl;
			cout<<"Tiempo para que madure: "<<10-maduracion*3<<endl;
			
		}	
		
	
};

#endif
