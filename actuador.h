/*
Titulo:  actuador.h
Descripcion: Clase madre de diferentes actuadores
Autor: José Miguel Luna Vega A01706424
*/

#ifndef ACTUADOR_H
#define ACTUADOR_H

#include<iostream>

using namespace std;

class Actuador{
	
	private:
		
		string nombre;
		string funcion;
		
	public:
		
		Actuador();
		
		Actuador(string _nombre, string _funcion){
			
			nombre = _nombre;
			funcion = _funcion;
			
		}
	
};

#endif


