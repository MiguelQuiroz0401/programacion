/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    cout<< "Calcular salario"<<endl;
    float s,j,d;
    cout<<"Ingresar la cantidad de dias: ";
    cin>> d;
    cout<< "Ingresar el jornal: ";
    cin>> j;
    s=j*d;
    cout<<"Su salario es: "<<s;

    return 0;
}
