/*
Titulo:  actuador.h
Descripcion: Clase madre de diferentes actuadores
Autor: José Miguel Luna Vega A01706424
*/

#ifndef ACTUADOR_H
#define ACTUADOR_H

#include<iostream>

using namespace std; 

class Actuador{       //Creacion de la clase actuador
	
	private:
		
		string nombre;    //Atributos
		
	public:
			
		Actuador(string _nombre){   //Constructor
			
			nombre = _nombre;
			
		}
		
		Actuador(): nombre("Vacio"){}; //Constructor default
		
		string get_nombre(){
			return nombre;
		}
};

#endif


