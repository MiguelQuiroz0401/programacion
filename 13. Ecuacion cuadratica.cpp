// Ecuacion cuadratica.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include <math.h>


using namespace std;

void main() 
{
	float a,b,c,d,x1,x2,xr,xi,x;
	cout<< "La ecuacion cuadratica"<<endl;
	cout<< "ingresar a: ";
	cin>>a;
	cout<< "Ingresar b: ";
	cin>>b;
	cout<< "Ingresar c: ";
	cin>>c;
	if (a!=0)
	{
		d=pow(b,2)-4*a*c;
		if (d==0)
			cout<< "Solucion unica: "<< -b/(2*a);
		else
			if (d>0)
			{
				x1=(-b+sqrt(d))/(2*a);
				x2=(-b-sqrt(d))/(2*a);
				cout<< "Soluciones reales: x1="<<x1<<"   x2="<<x2;
			}
			else
			{
				xr=-b/(2*a);
		        xi=sqrt(-d)/(2*a);
				cout<<"Soluciones imaginarias: "<<endl;
			    cout<<" x1="<<xr<<" + "<<xi<<"i";
				cout<<"   x2= "<<xr<<" - "<<xi<<"i";
			}
	}
	else {
		cout<<"No tiene solucion";
	}
	getch();
}

