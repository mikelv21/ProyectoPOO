/*
Titulo:          Main de Huerto
Descripcion:     El objetivo  es sistematizar un huerto con ayuda de la POO
Autor:           José Miguel Luna Vega A01706424
*/

#include<iostream>
using namespace std;

#include "frutal.h"
#include "decorativa.h"
#include "reloj.h"
#include "humedad.h"
#include "bomba.h"
#include "llave.h"
#include "huerto.h"     // esta es la clase a la que se pretende hacer agregacion

int main(){
	
	/*En este segundo avance me di a la tarea de incluir la herencia a mi codigo
	De la clase planta, actuadores y sensores a dos clases hijas cada una.
	
	IMPORTANTE: Este main es 100 por ciento funcional y sirve para mostrar TODAS las 
	clases que usare en mi programa (incluida la herencia), pues se creo al menos 
	un objeto de cada una y se mostraron sus respectivas funciones.
	
	El problema profesor, es que no esta apegado aun al UML ya que no pude solucionar
	un error a la hora de intentar la agregacion, por lo que de ser posible me gustaria
	ver si me puede ayudar en una sesion de asesoria.
	*/
	
	
	Frutal fresa1("Fresa 1","Frutal",10,1,"fresas",0.12);    //creo un objeto de la clase frutal
	fresa1.mostrarCaracteristicas();                         //muestro sus caracteristicas
	fresa1.consultaMaduracion();
	
	cout<<endl;
	
	Decorativa pasto("Pasto 1","Decorativa",30,1,22,0.1);   //creo un objeto de la clase decorativo
	pasto.mostrarCaracteristicas();
	pasto.get_altura();
		
	cout<<endl;
	
	Llave llave1("Llave para Frutal","Distribuir agua","1");  //creo un objeto de la clase llave
	llave1.abrir();
		
	cout<<endl;
	
	Bomba bomba("Bomba","Bombear agua");    //creo un objeto de la clase bomba
	bomba.bombeando();
		
	cout<<endl;
	
	Reloj RTC("Tiempo",06,30,20);    //creo un objeto de la clase sensor reloj
	RTC.get_data();
	
	cout<<endl;
	
	Humedad DHTC11("Humedad",0);  //creo un objeto de la clase sensor humedad
	DHTC11.get_data();
		
	cout<<endl;

	
	return 0;
}
