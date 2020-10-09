// for.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include "math.h"

using namespace std;

void main()
{
	int suma=0,n=0;
	cout<<"Ingrese la cantidad de valores a sumar: ";
	cin>>n;

	for (int i=0;i<=n;i++) {
		suma=suma+i;
	}
	cout<<"La suma es: "<<suma;
	getch();
}

