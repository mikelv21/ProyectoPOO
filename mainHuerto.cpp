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
#include "llave.h"		//Se importaron anteriormente las clases con las que se trabajan
#include "huerto.h"     //Esta es la clase a la que se hace la agregacion

int main(){
	
	/*NOTA: A continuacion se crearan los objetos a utilizar en el programa, ademas de mostrar
			sus principales caracteristicas o funcinoes, esta parte equivaldria al "set-up" del
			programa principal aplicado en microcontroladores.
	*/
	
	cout<<"Se crearon los siguientes objetos:"<<endl;
		
	Frutal fresa1("Fresa 1","Frutal",10,1,"fresas",0.12);    //creo un objeto de la clase frutal
	Frutal cerezo1("Cerezo 1","Frutal",15,1,"cerezos",0.03);
	fresa1.mostrarCaracteristicas();                         //Para fines demostrativos
													 //Muestro las caracteristicas de un objeto
	cout<<endl;
	
	Decorativa pasto("pasto","Decorativa",45,1,22,0.1);   //creo un objeto de la clase decorativo
	Decorativa palma1("palma","Decorativa",8,2,50,0.2);  //De igual manera se imprimen las caracteristicas
	pasto.mostrarCaracteristicas();
		
	cout<<endl;
	
	 //Se crean las llaves necesarias para alimentar nuestro huerto
	
	Llave llave1("fresas","De fresas 1"); 
	Llave llave2("palma","De palmas 1"); 
	Llave llave3("pasto","Del pasto 1"); 
	Llave llave4("cerezos","De cerezos 1"); 
	
	Huerto huerto1;                    //Creo mi huerto
	huerto1.agregarFrutal(fresa1);     //Le agrego mis plantas
	huerto1.agregarDecorativa(pasto);
	huerto1.agregarFrutal(cerezo1);
	huerto1.agregarDecorativa(palma1);
	
	huerto1.agregarLlave(llave1);      //Le agrego mis llaves
	huerto1.agregarLlave(llave2);
	huerto1.agregarLlave(llave3);
	huerto1.agregarLlave(llave4);
	
	huerto1.mostrarLista();
	
	Bomba bomba("Bomba general");    //creo un objeto de la clase bomba
	
	Reloj RTC("Tiempo",06,30,0);    //creo un objeto de la clase sensor reloj
		
	Humedad DHTC11("Humedad",20);  //Creo un objeto de la clase sensor humedad		
	
	//Aqui comienza el funcionamiento principal:  (en la declaracion de la funcion hay mas info)
	
	//De acuerdo a los parametros de los sensores empieza a regar
	RTC.get_data();
	
	cout<<"La humedad es del: "<<DHTC11.get_data()<<"%"<<endl;
	
	huerto1.regar(bomba,RTC,DHTC11);
	
	return 0;
}
