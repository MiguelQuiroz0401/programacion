// Saca el area del circulo.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "conio.h"
#include <iostream>

using namespace std;

int main()
{
    float r,area,pi;
    cout<<"AREA DEL CIRCULO"<<endl;
    cout<<"Escribe el radio del circulo:"<<endl;
    cin>>r;
    pi=3.1416;
    area= (pi*r*r);
    cout<<"El area del circulo es: "<<area;

     getch();
}