
#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;

void main () 
{
	float i,n,SUMA;
	cout<<"Ingrese n numeros: ";
	cin>>n;
    i=0;
	SUMA=0;
	while (i<n)
	{
		i=i+2;
		SUMA=SUMA+i;
	}
	cout<<"La sumatoria de n pares es: ";
	cout<<SUMA;

	getch();
}
