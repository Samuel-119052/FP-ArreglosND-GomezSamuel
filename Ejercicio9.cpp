#include<iostream>
using namespace std;
void Rotacion(int fil[], int N){
	int ult;
	ult=fil[N-1];
	for(int i=N-1; i>0; i--){
		fil[i]=fil[i-1];
	}
	fil[0]= ult;
}
int main(){
	int N;
	cout<<"Ingrese el orden del cuadrado latino"<<endl;
	cin>>N;
	int Mtz[N][N];
	int Fil[N];
	if(N<=0){
		cout<<"El orden tiene que ser mayor que cero"<<endl;
	}else{
		for(int k=0; k<N; k++){
			Fil[k]=k+1;
		}
		for(int i=0; i<N; i++){
			for(int j=0; j<N; j++){
				Mtz[i][j] = Fil[j];
			}
			Rotacion(Fil, N);
		}
		for(int i=0; i<N; i++){
			for(int j=0; j<N; j++){
				cout<<Mtz[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}