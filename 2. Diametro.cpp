/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include "conio.h"
#include<math.h>

using namespace std;

int main() {
	float diametro;
	cout<<"Ingrese el diamtero de la esfera: ";
	cin>> diametro;
	double pi=3.1416,volumen;
	float area,perimetro;
	area= (pi/4)*diametro* diametro;
	cout<<"El area de la esfera es :"<<area<<endl;
	volumen=(4/3.0)*pi*((diametro*diametro*diametro)/8.0);
	cout<<"el volumen de la esfera es : "<<volumen<<endl;
	perimetro= 2*pi*(diametro/2.0);
	cout<<"el perimetro de la esfera es: "<<perimetro;

    return 0;
}
