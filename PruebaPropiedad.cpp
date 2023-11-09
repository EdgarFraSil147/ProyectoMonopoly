#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;
int main(){
	string acapulco="Acapulco";
	unsigned int acapulcoPropiedad=0;
	bool compra=0;
	
	switch(acapulcoPropiedad){
		case 0:
			cout<<"Esta propiedad esta libre, la quieres comprar?"<<endl;
			cout<<"1.- Si\t\t0.- No"<<endl;
			cin>>compra;
			if(compra==1){
				acapulcoPropiedad=1;
				cout<<"Paga"<<endl;
			}
			else{
				cout<<"Se procede a subasta"<<endl;
			}
			break;
		case 1:
	}
	return 0;
}
