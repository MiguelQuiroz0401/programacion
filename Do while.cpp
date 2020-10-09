// Do while.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
using namespace std;
void main()
{
	int mayor,menor,n,suma,i;
	float promedio;
	cout<<"Ingrese el numero: ";
	cin>>n;
	suma=0;
	i=0;
	mayor=n;
	menor=n;
	do{
		suma=suma+n;
		if (mayor<n)
			mayor=n;
		if (menor>n)
			menor=n;
		i++;
		cout<<"Ingrese el numero: ";
	    cin>>n;
