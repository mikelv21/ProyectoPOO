/*
Titulo:          Main de Huerto
Descripcion:     El objetivo  es sistematizar un huerto con ayuda de la POO
Autor:           José Miguel Luna Vega A01706424

OneDrive\Escritorio\Tec\2do Semestre\Pensamiento C++\proyect
*/
#include<iostream>

using namespace std;

#include "frutal.h"
#include "decorativa.h"
#include "reloj.h"
#include "humedad.h"
#include "bomba.h"
#include "llave.h"


int main(){
	
	Frutal fresa("Fresa 1","Frutal",10,1,"fresas",0.12);
	fresa.mostrarCaracteristicas();
	fresa.consultaMaduracion();
	
	cout<<endl;
	
	Decorativa pasto("Pasto 1","Decorativa",30,1,22,0.1);
	pasto.mostrarCaracteristicas();
	pasto.get_altura();
		
	cout<<endl;
	
	Llave llave1("Llave para Frutal","Distribuir agua","1");
	llave1.abrir();
		
	cout<<endl;
	
	Bomba bomba("Bomba","Bombear agua");
	bomba.bombeando();
		
	cout<<endl;
	
	Reloj RTC("Tiempo",06,30,20);
	RTC.get_data();
	
		
	cout<<endl;
	
	Humedad DHTC11("Humedad",0);
	DHTC11.get_data();
	
		
	cout<<endl;
		
	return 0;
}
