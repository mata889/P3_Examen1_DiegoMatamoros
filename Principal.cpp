#include <iostream>
#include <string>
#include "Piezas.h"

Piezas*** crearTablero();
void eliminarTablero(Piezas***);

using namespace std;

int main(){
	string jugador1;
	string jugador2;
	char j1[100],j2[100];


	cout<<"Introduzca su nombre Jugador 1:"<<endl;
	cin>>j1;
	jugador1=j1;

	cout<<"Introduzca su nombre Jugador 2:"<<endl;
	cin>>j2;
	jugador2=j2;

	cout<<jugador1<<" "<<"VS"<<" "<<jugador2<<endl;

	Piezas*** tablero=crearTablero();
	cout<<"se ha creado el tablero"<<endl;

	eliminarTablero(tablero);
	return 0;

}

Piezas*** crearTablero(){
	Piezas*** tablero=new Piezas**[8];
	for (int i = 0; i < 8; i++) {
		tablero[i]=new Piezas*[8];
	}
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			tablero[i][j]=NULL;
		}
	}
	return tablero;
}

void eliminarTablero(Piezas*** tablero){
	for (int i = 0; i < 8; i++) {
		delete[] tablero[i];
	}
	delete[] tablero;
}

Piezas*** llenarTablero(Piezas***tabla){
	
}
