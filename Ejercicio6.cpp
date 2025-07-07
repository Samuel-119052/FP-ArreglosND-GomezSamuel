#include<iostream>
using namespace std;
int main(){
	int Mtz[6][6];
	int aux;
	cout<<"Matriz"<<endl;
	for(int i=0; i<6; i++){
		for(int j=0; j<6; j++){
			cout<<"Ingrese el valor para la matriz["<<i<<"]["<<j<<"]: ";
			cin>> Mtz[i][j];
		}
	}
	for(int i=0; i<6; i++){
		for(int j=0; j<6;j++){
			cout<<Mtz[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=0; i<6; i++){
		for(int j=0; j<3; j++){
			aux = Mtz[i][j];
			Mtz[i][j] = Mtz[i][5-j];
			Mtz[i][5-j] = aux;
		}
	}
	cout<<"Matriz reflejada"<<endl;
	for(int i=0; i<6; i++){
		for(int j=0; j<6;j++){
			cout<<Mtz[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}