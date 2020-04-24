/*
Titulo: decorativa.h
Descripcion: Clase hija de plantas llamada decorativa
Autor: José Miguel Luna Vega A01706424
*/

#ifndef DECORATIVA_H
#define DECORATIVA_H

#include "planta.h"

class Decorativa: public Planta{
	
	private:                     //atributos especificos de las plantas decorativas
		
		float altura;
		float crecimiento;
		
	public: 
		
		Decorativa();
		
		Decorativa(string _id, string _tipo, int _tiempoR, int _frecR, float _h, float _dh)
		:Planta(_id,_tipo,_tiempoR,_frecR){
		
			altura = _h;
			crecimiento= _dh;
			
		}
		
		void get_altura(){             //metodo necesario de las plantas decorativas
			
			cout<<"Su altura es de: "<<altura<<" cm."<<endl;
			
		}
};

#endif
