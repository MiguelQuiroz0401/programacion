// RC-IVA.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include <math.h>
using namespace std;

void main()
{
	float h,p,sb,d,sn;
	char n[20];
	cout<<"Introducir nombre: "; 
	cin>>n;
	cout<< "Horas trabajadas al mes: ";
	cin>>h;
	cout<< "Precio por hora: ";
	cin>>p;
	sb=(h*p);
	if (sb>8272) {
	    sn=(h*p)-((h*p)*13/100);
	    cout<<"Su sueldo neto es: ";
	    cout<<sn;
	   }
	else {
		cout<<"El sueldo neto es: ";
		cout<<sb;
	    }
	getch();
}

