#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
int Dado(){
	unsigned int dado=0;
	srand(time(NULL));
	do{
		dado=rand()%10;
	}
	while(dado<1||dado>6);
	return dado;
}
void delay(int secs){
	for(int i=(time(NULL)+secs);time(NULL)!=i;time(NULL));
}
int main(){
	int posicion=1;
	bool volverPosicion=1;
	int tirada=0;
	do{
		cout<<"Posicion inicial "<<posicion<<endl;
		tirada=Dado();
		posicion=posicion + tirada;
		cout<<"Primer dado: "<<tirada<<endl;
		delay(1);
		tirada=Dado();
		posicion=posicion + tirada;
		cout<<"Segundo dado: "<<tirada<<endl;
		if(posicion>39){
			posicion=posicion-39;
		}
		cout<<"Tira dado, segunda posicion: "<<posicion<<endl;
		cout<<"Volver a tirar?\n1.- Si\t0.- No"<<endl;
		cin>>volverPosicion;
		system("cls");
	}
	while(volverPosicion==1);
	return 0;
}
