/*
Titulo: frutal.h
Descripcion: Clase hija de plantas llamada frutal
Autor: Jos� Miguel Luna Vega A01706424
*/

#ifndef FRUTAL_H
#define FRUTAL_H

#include "planta.h"

class Frutal: public Planta{
	
	private:
		
		string fruto;
		float maduracion;
		
	public: 
		
		Frutal();
		
		Frutal(string _id, string _tipo, float _tiempoR, float _frecR, string _fruto, float _maduracion)
		:Planta(_id,_tipo,_tiempoR,_frecR){
		
			fruto = _fruto;
			maduracion = _maduracion;
			
		}
		
		void consultaMaduracion(){
			
			cout<<"El fruto es: "<<fruto<<endl;
			cout<<"Tiempo para que madure: "<<10-maduracion*3<<endl;
			
		}	
		
	
};

#endif
