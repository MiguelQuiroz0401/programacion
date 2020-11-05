// logica.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
#define MAX 100

using namespace std;

void cargar(int x[],int n);
void mostrar(int x[],int n);
void burbuja(int x[],int m);

int main()
{
	int n,a[MAX];
	do{
	cout<<"ingrese el tamano del vector: ";
	cin>>n;
	}while ((n>MAX) || (n<=0));
	cargar(a,n);
	burbuja(a,n);
	mostrar(a,n);
	getch();
	return 0;
}

void burbuja(int x[],int n){
	int aux;
	for (int i=0;i<n-1;i++)
		for (int j=i;j<n;j++)
			if (x[i]<x[j])
			{
				aux=x[i];
				x[i]=x[j];
				x[j]=aux;

			}
}
void cargar(int x[],int n){
	for (int i=0;i<n;i++){
		cout<<"Vector["<<i<<"]= ";
		cin>>x[i];
	}
}
void mostrar(int x[],int n){
	cout<<"--------------------------------"<<endl;
	for (int i=0;i<n;i++){
		cout<<"vector["<<i<<"]= "<<x[i]<<endl;
	}
}