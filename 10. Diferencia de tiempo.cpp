#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include "math.h"


using namespace std;

void main()
{
	int a,b,c,d,e,f,g,h,hora,minutos,segundos;
	cout<< "Diferencias entre horas, minutos y segundos"<<endl;
	cout<<"Ingrese la hora inicial en formato de 24 horas : ";
	cin>>a;
	cout<<"Ingrese los minutos: ";
	cin>>b;
	cout<<"Ingrese los segundos: ";
	cin>>c;
	cout<<"Ingrese la hora final en formato de 24 horas : ";
	cin>>d;
	cout<<"Ingrese los mintos final: ";
	cin>>e;
	cout<<"Ingrese los segundos final: ";
	cin>>f;
	hora=a-d;
	minutos=b-e;
	segundos=c-f;
	if (minutos>=60)
	{	
		hora=hora+1;
		if(minutos<=0)
			minutos=minutos;

	}
	else { 
			if(segundos>=60);
			minutos=minutos+1;
			
	


	}
	cout<< "Horas: "<<hora<<" Minutos: "<<minutos<<" Segundos: "<<segundos;

	getch();
}
