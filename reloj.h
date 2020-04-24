/*
Titulo: reloj.h
Descripcion: Clase hija de sensor llamada reloj
Autor: José Miguel Luna Vega A01706424
*/

#ifndef RELOJ_H
#define RELOJ_H

#include "sensor.h"

class Reloj: public Sensor{
	
	private:
		 
		int hora;                 //atributos especificos de los relojes
		int minuto;
		int segundos;
		
	public:
		
		Reloj();          //constructores
		
		Reloj(string _tipo, int _hora, int _minuto, int _segundos): Sensor(_tipo,0){
			
			hora = _hora;
			minuto = _minuto;
			segundos = _segundos;
			
		}
		
		void get_data(){         //metodo especifico del reloj el cual se sobreescribe al del sensor 
			
			cout<<"La hora es: "<<hora<<":" <<minuto<<":"<<segundos<<endl;
			
		}

	
};

#endif
