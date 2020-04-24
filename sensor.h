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

		string tipo;
		float data;
		
	public:
		
		Sensor();
		
		Sensor(string _tipo, float _data){
			
			tipo = _tipo;
			data = _data;
			
		}
		
		float get_data(){
			
			return data;
			
		}
	
};


#endif
