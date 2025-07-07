#include<iostream>
using namespace std;
const int N=10;
int Vecinos(int Ini[N][N], int i, int j){
	int viv=0;
	for(int k= i-1; k<= i+1; k++){
		for(int f= j-1; f<= j+1; f++){
			if(k>=0&&k<N&&f>=0&&f<N){
				if(k!=i||f!=j){
					viv += Ini[k][f];
				}
			}
		}
	}
	return viv;
}
int main(){
	int Ini[N][N];
	int Seg[N][N];
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			Ini[i][j] = rand() % 2;
		}
	}
	cout<<"Primera generacion"<<endl;
	for(int i=0; i<N; i++){
		for(int j=0; j<N;j++){
			cout<<Ini[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			int Veci=Vecinos(Ini, i, j);
			if(Ini[i][j]==1){
				if(Veci==2||Veci==3){
					Seg[i][j] = 1;
				}else{
					Seg[i][j] = 0;
				}
			}else{
				if(Veci==3){
					Seg[i][j]=1;
				}else{
					Seg[i][j]=0;
				}
			}
		}
	}
	cout<<"Segunda generacion"<<endl;
	for(int i=0; i<N; i++){
		for(int j=0; j<N;j++){
			cout<<Seg[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}