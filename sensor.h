/*
Titulo:  Sensor.h
Descripcion: Clase madre de diferentes sensores
Autor: José Miguel Luna Vega A01706424

*/

#ifndef SENSOR_H
#define SENSOR_H

#include<iostream>

using namespace std;

//Es IMPORTANTE aclarar que los atributos de los sensores en la vida real se actualizaran
//por si solos, pero para fines practicos de este proyecto se fijaran dichos valores pare demostrar 
//su funcionamiento activo

class Sensor{ 
	
	private:

		string tipo;          //Atributos y Metodos generales de los sensores
		float data;
		
	public:
		
		Sensor(): tipo("vacio"), data(0) {};   //Constructor por default
		
		Sensor(string _tipo, float _data){
			
			tipo = _tipo;
			data = _data;
			
		}
		
		float get_data(){       
			
			return data;
			
		}
	
};


#endif
