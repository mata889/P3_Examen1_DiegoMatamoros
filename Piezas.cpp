#include "Piezas.h"


#include <iostream>

using namespace std;

Piezas::Piezas(){

	this->color=' ';
	this->tipo=' ';

}

Piezas::Piezas(char pColor, char pTipo){

	color=pColor;
	tipo=pTipo;

}

char Piezas::getColor(){
	return color;
}
char Piezas::getTipo(){
	return tipo;
}



void Piezas::setColor(char pColor){
        color = pColor;
}
void Piezas::setTipo(char pTipo){
	tipo=pTipo;
}


Piezas::~Piezas(){
}
