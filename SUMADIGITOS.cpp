#include "stdafx.h"
#include <iostream>
#include<conio.h>

using namespace std;

 void sumadigitos(int N,int &suma);//int sumadigitos (int,N)


 void main()
 {
 	int N,d,suma=0;
 	cout<<"Ingrese el numero: ";
 	cin>>N;
 	sumadigitos(N,suma);
 	cout<<"La suma de los digitos es: "<<suma;
 	getch();
 }
 
 void sumadigitos(int N, int &suma)
 {
 	int d;
 	while(N>0)
 	{
 		d=N%10;
		suma=suma+d;
		N=N/10;
 		
	 }
 }