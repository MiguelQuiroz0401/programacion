#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include "math.h"

using namespace std;

void main()
{
    cout<<"Interes compuesto"<<endl; 
    float i,periodo,capital,tasa, monto;
    cout<<"Ingrese el capital: "<<endl;
    cin>>capital;
    cout<<"Ingrese el periodo de tiempo: "<<endl;
    cin>>periodo;
    cout<<"Ingrese la tasa de interes: "<<endl;
    cin>>tasa;
    monto=capital*pow(1+tasa/100,tasa);
    i=monto-capital;
    cout<<"El interes compuesto es: "<<endl<<i;
    
    
    
    
    
    getch();
}
