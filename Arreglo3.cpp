#include <iostream>
using namespace std;

void llenarArreglo(int valores[], int &tam){
		for(int i=0;i<tam;i++){
			cout<<"Ingrese un numero: ";
			cin>>valores[i]; 
		}
}

void buscarArreglo(int valores[] ){
	int indice;
	cout<<"Ingrese la posicion a buscar: ";
	cin>>indice;
	cout<<"El numero es: "<<valores[indice];
}

int main(){
	int tam;
	cout<<"Ingrese el tamanio del arrelgo: ";
	cin>>tam;
	int valores[tam]={};
	llenarArreglo(valores, tam);
	buscarArreglo(valores);
}
