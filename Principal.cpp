#include <iostream>
#include <string>


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

	
	return 0;
}
