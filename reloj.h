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
		 
		int hora;            //Atributos especificos de los relojes
		int minuto;
		int segundos;
		
	public:
		
		Reloj():Sensor("vacio",0),hora(0),minuto(0),segundos(0){};    //Constructorres por defaults
		
		Reloj(int _hora, int _min, int _segs):Sensor("vacio",0),hora(_hora),minuto(_min),segundos(_segs){};
			
		Reloj(string _tipo, int _hora, int _min, int _segs): Sensor(_tipo,0){
			
			hora = _hora;
			minuto = _min;
			segundos = _segs;
			
		}
	
	//Metodo especifico del reloj el cual se sobreescribe al del sensor
	
		void get_data(){          
			
			cout<<"La hora es: "<<hora<<":" <<minuto<<":"<<segundos<<endl;
			
		}
	
		int get_hora(){
			return hora;
		}
		
		int get_minuto(){
			return minuto;
		}
		
		int get_segundos(){
			return segundos;
		}
		
};

#endif
