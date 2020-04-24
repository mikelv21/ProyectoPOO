/*
Titulo:  Sensor.h
Descripcion: Clase madre de diferentes sensores
Autor: José Miguel Luna Vega A01706424

*/

#ifndef SENSOR_H
#define SENSOR_H

#include<iostream>

using namespace std;

class Sensor{ 
	
	private:

		string tipo;          //atributos y metodos generales de los sensores
		float data;
		
	public:
		
		Sensor();   //constructores
		
		Sensor(string _tipo, float _data){
			
			tipo = _tipo;
			data = _data;
			
		}
		
		float get_data(){       
			
			return data;
			
		}
	
};


#endif
