#include<iostream>
#include<cstdlib>
using namespace std;
const int N=10;
int Vecinos(int Min[N][N], int i, int j){
	int sum=0;
	for(int k= i-1; k<= i+1; k++){
		for(int f= j-1; f<= j+1; f++){
			if(k>=0&&k<N&&f>=0&&f<N){
				if(k!=i||f!=j){
					sum+=Min[k][f];
				}
			}
		}
	}
	return sum;
}
int main(){
	int Min[N][N];
	int Num[N][N];
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			Min[i][j] = rand() % 2;
		}
	}
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			Num[i][j] = Vecinos(Min, i, j);
		}
	}
	cout<<"Tablero de minas      Tablero de numeros"<<endl;
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			cout<<Min[i][j]<<" ";
		}
		cout<<"  ";
		for(int j=0; j<N; j++){
			cout<<Num[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}