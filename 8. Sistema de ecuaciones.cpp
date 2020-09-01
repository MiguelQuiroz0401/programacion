/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
   float a,b,c,d,e,f,x,y;
   cout<< "Ax+By=C";
   cout<< "Dx+Ey+F";
   cout<< "Ingresar primer valor: ";
   cin>> a;
   cout<< "Ingresar segundo valor: ";
   cin>> b;
   cout<< "Ingresar tercer valor: ";
   cin>> c;
   cout<< "Ingresar el cuarto valor: "  ;
   cin>> d;
   cout<< "Ingresar el quinto valor: ";
   cin>> e;
   cout<< "Ingresar el sexto valor: ";
   cin>> f;
   
   x=(-b*f+e*c)/(-b*d+a*e);
   
   y=(-c*d+a*f)/(-b*d+a*e);
  
   cout<< "Los valores de las incognitas son:  x= "<<x<<"  y= "<<y;
    return 0;
 
}
