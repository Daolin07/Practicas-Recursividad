#include <iostream>
using namespace std;

int main(){
	int tam=3;
	string nombres[tam]={};
	int edades[tam]={};
	for(int i=0;i<tam;i++){
		cout<<"Ingrese el nombre "<<i+1<<" : ";
		cin>>nombres[i];
		cout<<"Ingrese la edad "<<i+1<<" : ";
		cin>>edades[i];
	}
	for(int j=0;j<tam;j++){
		cout<<nombres[j]<<" tiene una edad de "<<edades[j]<<" anios"<<endl;
	}
}
