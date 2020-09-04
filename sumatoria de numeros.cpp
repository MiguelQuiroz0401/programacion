#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include "math.h"
using namespace std;
void main()
{
	float n,mayor,i,menor,numero,promedio,suma;
	cout<< "Ingrese una cantidad n de numeros: ";
	cin>>n;
	i=1;
	suma=0;
	cout<<"Ingrese un valor: ";
	cin>>numero;
	mayor=numero;
	menor=numero;
	while(i<=n)
	{

		i=i+1; //aumentar el contador
		suma=suma+numero; //acumulador de la suma

		if (mayor<numero)
			mayor=numero;
		if (menor>numero)
			menor=numero;
		if(i<=n)
		{
			cout<< "Igrese un valor: ";
		    cin>>numero;
		}
		
	}
	cout<< "El Numero Mayor es: "<<mayor<<endl;
	cout<< "El Numero Menor es: "<<menor<<endl;
	cout<<"El promedio es: "<<suma/n;
	getch();
}

