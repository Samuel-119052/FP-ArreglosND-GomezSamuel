#include<iostream>
using namespace std;
int main(){
	int Mtz[4][4];
	int Fil1, Fil2, aux;
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
	cout<<"Ingrese las filas que quiere intercambiar (0-3)"<<endl;
	cin>>Fil1>>Fil2;
	if(Fil1>0 || Fil1<3){
		if(Fil2>0 || Fil2<3){
			for(int j=0; j<4; j++){
				aux = Mtz[Fil1][j];
				Mtz[Fil1][j] = Mtz[Fil2][j];
				Mtz[Fil2][j] = aux;
			}
			cout<<"La matriz despues del intercambio de filas"<<endl;
			for(int i=0; i<4; i++){
				for(int j=0; j<4;j++){
					cout<<Mtz[i][j]<<" ";
				}
				cout<<endl;
			}
		}else{
			cout<<"Error: Numero invalido"<<endl;
		}
	}else{
		cout<<"Error: Numero invalido"<<endl;
	}

	return 0;
}