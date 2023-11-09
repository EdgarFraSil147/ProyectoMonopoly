#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>
using namespace std;
elegirFicha(){
	unsigned int eleccionDeFicha=0;
	srand(time(NULL));
	do{
	eleccionDeFicha=rand() % 10;
	}
	while(eleccionDeFicha>4||eleccionDeFicha<1);
	return eleccionDeFicha;
}
void delay(int secs){
	for(int i=(time(NULL)+secs);time(NULL)!=i;time(NULL));
}
tirarDado(){
	unsigned int numeroDeDado=0;
	srand(time(NULL));
	do{
	numeroDeDado=rand() % 10;
	}
	while(numeroDeDado>6||numeroDeDado<1);
	return numeroDeDado;
}
int main(){
	unsigned int tirada=0;
	unsigned int posicion=0;
	int dinero=0;
	bool comienzoOSalidaDelJuego=0;
	bool partida=0;
	string ficha1;
	string ficha2;
	unsigned int dadoJugador=0;
	cout<<"Bienvenido al modo de juego en solitario para Monopoly\n\n"<<endl;
	system("pause");
	system("cls");
	cout<<"1: Crear nueva Partida\n0: Salir\n"<<endl;
	cin>>comienzoOSalidaDelJuego;
	system("cls");
	if(comienzoOSalidaDelJuego==1){
		cout<<"Hola! Soy Pepe, hoy estare jugando contigo, con que pieza vas a jugar?\n"<<endl;
		cout<<"1.- Avion\t 2.- Patines\t 3.- Hamburguesa\t 4.- Patineta\n"<<endl;
		cin>>ficha1;
		system("cls");
		do{
			if(elegirFicha()==1){
			ficha2="Avion";
			}
			if(elegirFicha()==2){
				ficha2="Patines";
			}
			if(elegirFicha()==3){
				ficha2="Hamburguesa";
			}
			if(elegirFicha()==4){
				ficha2="Patineta";
			}
			
		}
		while(ficha2==ficha1);
		cout<<"Bien! yo elijo: "<<ficha2<<"\n\nComencemos!\n"<<endl;
		delay(3);
		system("cls");
		cout<<"Dame mi dinero"<<endl;
		dinero=15000000;
		posicion=1;
		system("pause");
		system("cls");
		partida=1;
		cout<<"Tira tu dado, quien saque el mayor numero va primero"<<endl;
		delay(4);
		tirada=tirarDado();
		cout<<"Yo saque: "<<tirada<<" tu cuanto sacaste?"<<endl;
		do{
			cout<<"Escribe tu resultado del dado: ";
			cin>>dadoJugador;
			if(dadoJugador<1||dadoJugador>6){
				cout<<"Ese valor no es posible, vuelve a escribirlo >:v"<<endl;
				delay(2);
				system("cls");
			}
		}
		while(dadoJugador<1||dadoJugador>6);
		if(dadoJugador>tirada){
			cout<<"Perfecto, tu vas primero :D"<<endl;
		}
		else{
			cout<<"Te aguantas porque yo voy primero >:D"<<endl;
		}
		delay(4);
		system("cls");
	}
	return 0;
}
