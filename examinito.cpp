#include "stdafx.h"
#include <iostream>
#include"conio.h"
#include "math.h"

using namespace std;

void main ()
{
	int numero,n,suma;
	suma=0;
	numero=0;
	cout<<"Ingrese n numeros naturales: ";
	cin>>n;
	while (numero<n)
	{
		numero=numero+1;
		suma=suma+numero;
	}
	cout<<"La sumatoria de los numeros es: "<<suma;
	getch();
}
