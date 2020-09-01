#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include "math.h"

using namespace std;

void main()
{
  int s,h,m,seg;
  cout<< "Convertidor de segundos a Horas, minutos y segundos"<<endl;
  cout<<"Introducir los segundos: ";
  cin>>s;
  if (s%3600==0) 
  {
	  h=s/3600;
  }
  else {
	  h=s/3600;
	  s=s%3600;
       if (s%60==0)
	   {
		   m=s/60;
	   }
	   else {
		   m=s/60;
		   s=s%60;
		   seg=s;
	   }
  }

	  cout<<"Horas: "<<h<<" Minutos: "<<m<<" Segundos: "<<seg;
    
    
    
    getch();
}

