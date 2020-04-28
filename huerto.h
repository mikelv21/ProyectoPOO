/*
Titulo:         huerto.h
Descripcion:     la clase donde se agregan la mayoria de las otras
Autor:           José Miguel Luna Vega A01706424
*/
#ifndef HUERTO_H
#define HUERTO_H

#include "planta.h"
#include "frutal.h"
#include "decorativa.h"
#include "actuador.h"
#include "llave.h"
#include "bomba.h"
#include "reloj.h"
#include "humedad.h"

#include<iostream>
using namespace std;
const int MAX = 100;

class Huerto{           //Aqui se agregara un arreglo de llaves y plantas para posteriormente
		                //definir la relacion entre estas
	private:
		
		int numFrutales;
		int numDecorativas;
		int numLlaves;
		Frutal frutales[MAX]; 
		Decorativa decorativas[MAX];
		Llave  llaves[MAX];

	public:		
		 									//Constructorres por default
		Huerto(){
			
			numFrutales = 0;
			numDecorativas = 0;
			numLlaves  = 0; 
			
			frutales[numFrutales] = Frutal("vacio","vacio",0,0,"vacio",0);
			decorativas[numDecorativas] = Decorativa("vacio","vacio",0,0,0,0);
			llaves[numLlaves] = Llave("vacio","vacio");

			numFrutales ++;
			numDecorativas ++;
			numLlaves  ++; 		
				
		}  
	
		    //Metodos para agregar mas llaves o plantas
		    
		void agregarFrutal(Frutal &f){
			frutales[numFrutales] = f;
			numFrutales ++;	
		}
		
		void agregarDecorativa(Decorativa &d){
			decorativas[numDecorativas] = d;
			numDecorativas ++;	
		}
		
		void agregarLlave(Llave &l){
			llaves[numLlaves]= l;
			numLlaves ++;
		}
		
			//Funciones para obtener el numero de objetos
			
		int get_numFrutales(){
			return numFrutales;
		}

		int get_numDecorativas(){
			return numDecorativas;
		}
		
			//Funcion para enlistar los objetos
		
		void mostrarLista();
		
		void regar(Bomba &b, Reloj &r, Humedad &h);
};

void Huerto::mostrarLista(){
		
	cout<<"La lista de frutales es: "<<endl;
			
	for(int i = 1; i<numFrutales; i++){
				
		cout<<frutales[i].get_id()<<endl;
				
	}
		cout<<endl;
			
	cout<<"La lista de decorativas es: "<<endl;
			
	for(int i = 1; i<numDecorativas; i++){
				
		cout<<decorativas[i].get_id()<<endl;
				
	}
		cout<<endl;
			
	cout<<"La lista de llaves es: "<<endl;
		
	for(int i = 1; i<numLlaves; i++){
		
		cout<<llaves[i].get_nombre()<<endl;
					
	}
		cout<<endl;	
}

	//Esta es la funcion detonante del riego del huerto

void Huerto::regar(Bomba &b, Reloj &r, Humedad &h){ 
	
	 //Si la humedad es la optima
	
	if(h.get_data()<30){     
		
		//Si es la hora adecuada
		
		if( r.get_hora()==6  && r.get_minuto()==30 && r.get_segundos()==0) {
		
		//Empieza a bombearse el agua
		cout<<endl;
		b.bombeando();
		
		//Aqui revisa que planta (existente) regar y que llave corresponde abrir
		
			for(int o = 1; o<numFrutales; o++){
				
				for(int i=0;i<numLlaves;i++){
					
					if(llaves[i].get_nombre()==frutales[o].get_fruto()){
						
						llaves[i].abrir();
						cout<<"El tiempo de: "<<frutales[o].get_tiempoRegado()<<"seg."<<endl;
						
					}
				
				
				}
				
			}
			
			for(int o = 1; o<numDecorativas; o++){
				
				for(int i=0;i<numLlaves;i++){
					
					if(llaves[i].get_nombre()==decorativas[o].get_id()){
						
						llaves[i].abrir();
						cout<<"El tiempo de: "<<decorativas[o].get_tiempoRegado()<<"seg."<<endl;
						
					}
				
				
				}
				
			}																		
			
		}
	}
	
}

#endif
