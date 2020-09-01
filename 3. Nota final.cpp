// Nota final.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include <math.h>

using namespace std;


void main()
{
	float a,b,c,x;
		cout<< "Promedio de parciales: ";
		cin>>a;
		cout<< "Examen final: ";
		cin>>b;
		cout<< "Nota del proyecto final: ";
		cin>>c;
		x=a+b+c;
		cout<< "Nota total final: "<<x;

	getch();
}

