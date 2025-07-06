#include<iostream>
using namespace std;
int main(){
	int Mtz[3][3];
	int Buq;
	cout<<"Matriz"<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"Ingrese el valor para la matriz["<<i<<"]["<<j<<"]: ";
			cin>> Mtz[i][j];
		}
	}
	for(int i=0; i<3; i++){
		for(int j=0; j<3;j++){
			cout<<Mtz[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Ingrese el valor que quiere buscar en la matriz"<<endl;
	cin>>Buq;
	cout<<"El valor "<<Buq<<" se encuentra: "<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(Mtz[i][j]==Buq){
				cout<<"Fila "<<i<<", Columna "<<j<<endl;
			}
		}
	}
	return 0;
}