/*
Titulo:  actuador.h
Descripcion: Clase madre de diferentes actuadores
Autor: Jos� Miguel Luna Vega A01706424
*/

#ifndef ACTUADOR_H
#define ACTUADOR_H

#include<iostream>

using namespace std; 

class Actuador{       //creacion de la clase actuador
	
	private:
		
		string nombre;    //atributos
		string funcion;
		
	public:
		
		Actuador();      //constructores
		 
		Actuador(string _nombre, string _funcion){
			
			nombre = _nombre;
			funcion = _funcion;
			
		}
	
};

#endif


