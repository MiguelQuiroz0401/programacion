#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;

void main()
{
	int cantidad,opcion;
	float total;
	cout<<">>>>>>>Menu<<<<<<<<"<<endl;
	cout<<"===="<<endl;
	cout<<"1. Hamburguesa simple"<<endl;
	cout<<"2. Hamburguesa con queso"<<endl;
	cout<<"3. Papa"<<endl;
	cout<<"4. Soda"<<endl;
	cout<<"0. Salir"<<endl;
	cout<<"Opcion: ";
	cin>>opcion;
	switch (opcion)
	{
	case 1: cout<<"ingrese cantidad: ";
		    cin>>cantidad;
			total=cantidad*3;
			break;
	case 2: cout<<"Ingrese cantidad: ";
		    cin>>cantidad;
			total=cantidad*5;
			break;
	case 3: cout<<"Ingrese cantidad: ";
		    cin>>cantidad;
			total=cantidad*2;
			break;
	case 4: cout<<"Ingrese cantidad: ";
		    cin>>cantidad;
			total=cantidad*2.5;
			break;
	case 0: cout<<"Salir ";
			break;
	
	default: cout<<"Error, no existe la opcion";
	}
	cout<<"El total es: ";
	cout<<total;
		getch();
}
