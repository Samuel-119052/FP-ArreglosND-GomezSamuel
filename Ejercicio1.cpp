#include<iostream>
using namespace std;
int main(){
	int mtz1[3][3];
	int mtz2[3][3];
	int Ptc[3][3];
	cout<<"Primera matriz"<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"Ingrese el valor para la primera matriz["<<i<<"]["<<j<<"]: ";
			cin>> mtz1[i][j];
		}
	}
	cout<<"Segunda matriz"<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"Ingrese el valor para la segunda matriz["<<i<<"]["<<j<<"]: ";
			cin>> mtz2[i][j];
		}
	}
	cout<<"Producto de matrices"<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			Ptc[i][j]=0;
			for(int k=0; k<3; k++){
				Ptc[i][j]+= (mtz1[i][k] * mtz2[k][j] );
			}
		}
	}
	cout<<"Matriz resultante del producto: "<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3;j++){
			cout<<mtz1[i][j]<<" ";
		}
		if(i==1) cout<<"* ";
		else cout<<"\t";
		for(int j=0; j<3;j++){
			cout<<mtz2[i][j]<<" ";
		}
		if(i==1) cout<<"= ";
		else cout<<"\t";
		for(int j=0; j<3; j++){
			cout<< Ptc[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}