#include<iostream>
using namespace std;
int main(){
	int Mtzo[4][4];
	int Mtzr[4][4];
	cout<<"Matriz"<<endl;
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cout<<"Ingrese el valor para la matriz["<<i<<"]["<<j<<"]: ";
			cin>> Mtzo[i][j];
		}
	}
	cout<<"Matriz original"<<endl;
	for(int i=0; i<4; i++){
		for(int j=0; j<4;j++){
			cout<<Mtzo[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			Mtzr[j][3-i] = Mtzo[i][j];
		}
	}
	cout<<"La Matriz rotada:"<<endl;
	for(int i=0; i<4; i++){
		for(int j=0; j<4;j++){
			cout<<Mtzr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}