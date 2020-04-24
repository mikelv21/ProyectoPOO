/*
Titulo: reloj.h
Descripcion: Clase hija de sensor para la humedad del huerto
Autor: José Miguel Luna Vega A01706424
*/

#ifndef HUMEDAD_H
#define HUMEDAD_H

#include "sensor.h"

class Humedad: public Sensor{
	
	public:
		
		Humedad();
		
		Humedad(string _tipo, float _data): Sensor(_tipo,_data){
		}
		
};

#endif
