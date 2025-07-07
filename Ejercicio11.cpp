#include<iostream>
using namespace std;
const int N=10;
bool Vecino(int Bos[N][N], int i, int j){
	for(int k= i-1; k<= i+1; k++){
		for(int f= j-1; f<= j+1; f++){
			if(k>=0&&k<N&&f>=0&&f<N){
				if(k!=i||f!=j){
					if(Bos[k][f]==1){
						return true;
					}
				}
			}
		}
	}
	return false;
}
int main(){
	int Bos[N][N];
	int Bosc[N][N];
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			Bos[i][j] = rand() % 3;
		}
	}
	cout<<"Estado incial del bosque"<<endl;
	for(int i=0; i<N; i++){
		for(int j=0; j<N;j++){
			cout<<Bos[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			if(Bos[i][j]==0){
				if(Vecino(Bos, i, j)){
					Bosc[i][j] = 1;
				}else{
					Bosc[i][j] = 0;
				}
			}else if(Bos[i][j] == 1){
				Bosc[i][j] = 2;
			}else if(Bos[i][j] == 2){
				Bosc[i][j] = 2;
			}
		}
	}
	cout<<"Propagando el fuego"<<endl;
	for(int i=0; i<N; i++){
		for(int j=0; j<N;j++){
			cout<<Bosc[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}