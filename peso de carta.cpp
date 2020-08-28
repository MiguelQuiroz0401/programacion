#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;

void main ()
{
	float p;
	cout<< "Declarar el peso en gramos: ";
	cin>>p;
	if (p<=0)

		cout<<"Error"<<endl;
	else 
		  if (p<50)
			 cout<<"El costo es de 1.50 bs"<<endl;
		  else 
		      if (p<=100)
				  cout<< "El costo es de 4.00 bs"<<endl;
			  else 
			       if(p<=200)
					   cout<< "El costo es de 6.00"<<endl;
				   else 
					   if(p<=350)
						   cout<< "El costo es de 10.50"<<endl;
					   else 
						   if (p<=500)
							   cout<<"El costo es: 15"<<endl;
						   else 
						       cout<<"No puede enviar como carta"<<endl;
	getch();
}
