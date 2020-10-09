// factorial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "conio.h"
#include "math.h"
#include <iostream>

using namespace std;

int factorial(int cont);
float total(float x,int num);

int main()
{
	int i,n,p,fact=1; 
	float x,suma;
	cout<<"ingresar el limite de la serie: "<<endl;
	cin>>n;
	cout<<"ingresar el numerador: "<<endl;
	cin>>x;
	suma=total(x,n);
	cout<<"La suma de la serie es: "<<suma;
	getch();
	return 0;
}
int factorial(int cont)
{
	int i=1,fact=1;
	while(i<=cont)  
	{
	
		fact=fact*i; 
	    i++;
	}
	return fact;
}
float total(float x,int num)
{
	int i,p;
	float suma;
	i=1; 
	suma=0; 
	p=1; 
	while(i<=num)  
	{ 
		if (i%2!=0) 
		{
			suma=suma+p*pow(x,i)/factorial(i);  
			p=p*(-1); 
		}
		i++; 
	}
	return suma;
}