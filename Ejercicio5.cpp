#include<iostream>
using namespace std;
int main(){
	int Mtz[4][4];
	cout<<"Matriz"<<endl;
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cout<<"Ingrese el valor para la matriz["<<i<<"]["<<j<<"]: ";
			cin>> Mtz[i][j];
		}
	}
	for(int i=0; i<4; i++){
		for(int j=0; j<4;j++){
			cout<<Mtz[i][j]<<" ";
		}
		cout<<endl;
	}
	int Ma = Mtz[1][1];
	int Me = Mtz[1][1];
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			if(Mtz[i][j] > Ma){
				Ma=Mtz[i][j];
			}
		}
		for(int j=0; j<4; j++){
			if(Mtz[i][j]< Me){
				Me=Mtz[i][j];
			}
		}
	}
	cout<<"El valor maximo de la matriz es: "<<Ma<<endl;
	cout<<"Se ubica en:"<<endl;
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			if(Mtz[i][j]==Ma){
				cout<<"Fila "<<i<<", Columna "<<j<<endl;
			}
		}
	}
	cout<<"El valor menor de la matriz es: "<<Me<<endl;
	cout<<"Se ubican en: "<<endl;
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			if(Mtz[i][j]==Me){
				cout<<"Fila "<<i<<", Columna "<<j<<endl;
			}
		}
	}
	return 0;
}