/*
Titulo:         huerto.h
Descripcion:     la clase donde se agregan la mayoria de las otras
Autor:           José Miguel Luna Vega A01706424
*/
#ifndef HUERTO_H
#define HUERTO_H

#include "planta.h"
#include "frutal.h"
#include "actuador.h"
#include "llave.h"

#include<iostream>
using namespace std;
const int MAX = 100;

class Huerto{           //Aqui se agregara un arreglo de llaves y plantas para posteriormente
		                //definir la relacion entre estas
	
	private:
		
		int numFrutales;
		int numLlaves;
		Frutal frutales[MAX]; 
		Llave  llaves[MAX];
	
	public:		
		
		Huerto(){   //constructores
		}
	
		Huerto(int _numFrutales, int _numLlaves){  
			
			numFrutales = _numFrutales;
			numLlaves  = _numLlaves; 
						
		}
		                                    //metodos para agregar mas llaves o plantas
		void agregarFrutal(Frutal &f){
			frutales[numFrutales] = f;
			numFrutales ++;	
		}
			
		int get_numFrutales(){
			return numFrutales;
		}
		
		void agregarLlave(Llave &l){
			llaves[numLlaves]= l;
			numLlaves ++;
		}
		
};

#endif
