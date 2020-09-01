// Interes simple.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include <math.h>
using namespace std;
void main ()
{
	float c,n,t,i;
	cout<< "Interes simple"<<endl; 
	cout<< "Ingresar capital: ";
	cin>>c;
	cout<< "Ingresar el periodo en anos: ";
	cin>>n;
	cout<< "Tasa de interes: ";
	cin>>t;
	i=c*n*t/100;
	cout<< "El interes simple es: ";
	cout<<i;


	getch();
}

