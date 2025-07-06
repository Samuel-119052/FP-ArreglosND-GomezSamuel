#include<iostream>
using namespace std;
int main(){
	int Mtz[4][4];
	int Dp=0, Ds=0;
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
			if(i==j){
				Dp+= Mtz[i][j];
			}
		}
		cout<<endl;
	}
	int i=0, j=3;;
	for(int k=0; k<4; k++){
		Ds+= Mtz[i][j];
		i++;
		j--;
	}
	cout<<"La suma de diagonales de la matriz es: "<<Dp+Ds<<endl;
	return 0;
}