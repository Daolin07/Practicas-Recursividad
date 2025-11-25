#include <iostream>
using namespace std;

void abrirmuñeca(int num){
	if(num==1){
		cout<<"ABRA LA MUÑECA";
		return;
	}
	cout<<"abriendo muñeca "<<num<<endl;
	abrirmuñeca(num-1);
}

int main(){
	abrirmuñeca(8);
}
