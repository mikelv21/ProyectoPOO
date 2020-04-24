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
		
		string id;          //atributos importantes de cada planta
		string tipo;
		int tiempoRegado;
		int frecuenciaRegado;
		
	public:
		
		Planta();       //constructores
		
		Planta(string _id, string _tipo, int _tiempoR, int _frecR){
		
			id = _id;
			tipo = _tipo;
			tiempoRegado = _tiempoR;
			frecuenciaRegado = _frecR;
			
		}
			 
		void mostrarCaracteristicas(){       //funcion que muestra caracteristicas generales del objeto
			
		cout<<"El id es: "<<id<<endl<<"La planta es una: "<<tipo<<endl;
		cout<<"Tiempo Regado: "<<tiempoRegado<<endl<<"Frec. regado: "<< frecuenciaRegado<<endl;
		
		}
		
		string get_id(){                            //getters
			return id;
		}
		
		string get_tipo(){
			return tipo;
		}
		
		int get_tiempoRegado(){
			return tiempoRegado;
		}
		
		int get_frecuenciaRegado(){
			return frecuenciaRegado;
		}

};
#endif

