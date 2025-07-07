#include<iostream>
using namespace std;
int main(){
	int Mtz[5][5];
	cout<<"Matriz"<<endl;
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			cout<<"Ingrese el valor para la matriz["<<i<<"]["<<j<<"]: ";
			cin>> Mtz[i][j];
		}
	}
	for(int i=0; i<5; i++){
		for(int j=0; j<5;j++){
			cout<<Mtz[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Recorrido en espiral"<<endl;
	int Arr=0, Aba=4, Izq=0, Der=4;
	while(Arr<=Aba&&Izq<=Der){
		for(int j=Izq; j<=Der; j++){
			cout<<Mtz[Arr][j]<<" ";
		}
		Arr++;
		for(int i=Arr; i<= Aba; i++){
			cout<<Mtz[i][Der]<<" ";
		}
		Der--;
		if(Arr<=Aba){
			for(int j=Der; j>= Izq; j--){
				cout<<Mtz[Aba][j]<<" ";
			}
			Aba--;
		}
		if(Izq<=Der){
			for(int i=Aba; i>=Arr; i--){
				cout<<Mtz[i][Izq]<<" ";
			}
			Izq++;
		}
	}
	cout<<endl;
	return 0;
}