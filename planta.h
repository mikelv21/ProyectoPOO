/*
Titulo:  planta.h
Descripcion: Clase madre de diferentes plantas
Autor: José Miguel Luna Vega A01706424
*/

#ifndef PLANTA_H
#define PLANTA_H

#include<iostream>
using namespace std;

class Planta{
	
	private: 
		
		string id;
		string tipo;
		float tiempoRegado;
		float frecuenciaRegado;
		
	public:
		
		Planta();
		
		Planta(string _id, string _tipo, float _tiempoR, float _frecR){
		
			id = _id;
			tipo = _tipo;
			tiempoRegado = _tiempoR;
			frecuenciaRegado = _frecR;
			
		}
			 
		void mostrarCaracteristicas(){
			
		cout<<"El id es: "<<id<<endl<<"La planta es una: "<<tipo<<endl;
		cout<<"Tiempo Regado: "<<tiempoRegado<<endl<<"Frec. regado: "<< frecuenciaRegado<<endl;
		
		}
		
		//void crece();	
};
#endif

