#include <iostream>
using namespace std;

int main(){
	int tam, indice;
	cout<<"Ingrese el tamanio del arrelgo: ";
	cin>>tam;
	int valores[tam]={};
	for(int i=0;i<tam;i++){
		cout<<"Ingrese un numero: ";
		cin>>valores[i]; 
	}
	cout<<"Ingrese la posicion a buscar: ";
	cin>>indice;
	cout<<"El numero es: "<<valores[indice];
}
