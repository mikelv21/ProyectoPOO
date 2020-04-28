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
		
		Frutal():Planta("vacio","vacio",0,0),fruto("vacio"),maduracion(0){};   //Constructorres por default
		
		Frutal(string _fru, float _mad):Planta("vacio","vacio",0,0),fruto(_fru),maduracion(_mad){};
		
		Frutal(string _id, string _tipo, int _tiempoR, int _frecR, string _fru, float _mad)
		:Planta(_id,_tipo,_tiempoR,_frecR){
		
			fruto = _fru;
			maduracion = _mad;
			
		}
		 
		void consultaMaduracion(){        //metodo unico de la planta frutal
			
			cout<<"El fruto es: "<<fruto<<endl;
			cout<<"Tiempo para que madure: "<<10-maduracion*3<<endl;
			
		}	
		
		string get_fruto(){
			return fruto;
		}
		
	
};

#endif
