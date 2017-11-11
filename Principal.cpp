#include <iostream>
#include <string>
#include "Piezas.h"

Piezas*** crearTablero();
void eliminarTablero(Piezas***);
Piezas*** llenarTablero(Piezas***);
void imprimirTablero(Piezas*** );
int letra(char );

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



	Piezas*** tablero=crearTablero();
//	cout<<"se ha creado el tablero"<<endl;
	llenarTablero(tablero);

	cout<<jugador1<<" "<<"VS"<<" "<<jugador2<<endl;
	bool win=true;
	int cantidad=0;
	while (win==true) {
		if (cantidad%2==0) {

			cout<<"ES SU TURNO NEGRO: "<<jugador1<<endl;
			string inicial,fin;
			char x,y,xx,yy;
			int x1,y1,xx1,yy1;
			do {

				imprimirTablero(tablero);
				cout<<"Introduzca Posicion Inicial ej.F4"<<endl;
				cin>>inicial;
				x=inicial.at(0);
				x1=letra(x);//conviertiendo la letra x a numeros

				y=inicial.at(1);
				y1=y-48;//conviertiendo la letra y a numeors
				//cout<<y1<<"cheq";

				cout<<"Introduzca Posicion fin ej.F4"<<endl;
				cin>>fin;
				xx=inicial.at(0);
				xx1=letra(xx);

				yy=inicial.at(1);
				yy1=yy-48;
				cantidad++;
			} while((x1<0 || x1>8 )||(xx1<0 || xx1>8) || (y1<0||  y1>8 )||( yy1<0 ||yy1>8));
			//cout<<"INTRODUJO MAL UN NUMERO,perdio su turno"<<endl;


		}else if(cantidad%2!=0){
			cout<<"ES SU TURNO BLANCO: "<<jugador2<<endl;
			string inicial,fin;
			char x,y,xx,yy;
			int x1,y1,xx1,yy1;
			do {

				imprimirTablero(tablero);
				cout<<"Introduzca Posicion Inicial ej.F4"<<endl;
				cin>>inicial;
				x=inicial.at(0);
				x1=letra(x);//conviertiendo la letra x a numeros

				y=inicial.at(1);
				y1=y-48;//conviertiendo la letra y a numeors
				//cout<<y1<<"cheq";

				cout<<"Introduzca Posicion fin ej.F4"<<endl;
				cin>>fin;
				xx=inicial.at(0);
				xx1=letra(xx);

				yy=inicial.at(1);
				yy1=yy-48;
				cantidad++;
			} while((x1<0 ||  x1>8 )|| (xx1<0 ||  xx1>8) ||  (y1<0 ||  y1>8 )|| ( yy1<0 ||  yy1>8));
		}
	}



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
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if ((i==0 && (j==1 || j==3 || j==5 || j==7)) ||((i==1 &&(j==0 || j==2 || j==4 || j==6))) ||(i==2 && (j==1 || j==3 || j==5 || j==7))) {
				tabla[i][j]=new Piezas('N','M');
			}
			else if((i==5 && (j==0 || j==2 || j==4 || j==6)) ||((i==7 &&(j==0 || j==2 || j==4 || j==6))) ||(i==6 && (j==1 || j==3 || j==5 || j==7))){
				tabla[i][j]=new Piezas('B','M');
			}else{
				tabla[i][j]=new Piezas(' ',' ');
			}
		}
	}
	return tabla;
}

void imprimirTablero(Piezas*** tabla){
	string letras="abcdefgh";
	string numeros="01234567";
	cout<<" ";
	for (size_t i = 0; i < 8; i++) {
		cout<<"  "<<letras.at(i)<<"  ";
	}
	cout<<endl;
	for (int i = 0; i < 8; i++) {
		cout<<numeros.at(i);
		for (int j = 0; j < 8; j++) {

			if (tabla[i][j]) {
				cout<<"[ "<<tabla[i][j]->getColor()<<" ]";
			}else{
				cout<<"[ ]";
			}

		}

		cout<<" "<<endl;
	}
}

int letra(char x){
	int numero;
	if (x=='a') {
		numero=0;
	}else if (x=='b') {
		numero=1;
	}else if (x=='c') {
		numero=2;
	}else if (x=='d') {
		numero=3;
	}else if (x=='e') {
		numero=4;
	}else if (x=='f') {
		numero=5;
	}else if (x=='g') {
		numero=6;
	}else if (x=='h') {
		numero=7;
	}
	return  numero;
}
