#include<iostream>
using namespace std; 
int main(){
	int n, s=0;
	cout<<"Ingrese el orden de la matriz: ";cin>>n;

	int matriz[n][n];
	
	for (int i=0;i<n;i++){
		for (int j=0; j<n; j++){
			cout<<"Ingrese el valor para la matriz[]"<<i<<"]["<<j<<"]:";cin>>matriz[i][j];
		}
	}
	
