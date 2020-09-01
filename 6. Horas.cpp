/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>


using namespace std;

int main() {
    int hora,minuto,segundo,h,x;
	cout<<"introducir la hora en formato de 24 horas: ";
	cin>>hora;
	cout<< "Introduce los minutos: ";
	cin>>minuto;
	cout<< "Introduce los segundos: ";
	cin>>segundo;
	x=hora-12;
	if (hora<12) {
	    cout<<"Esta es la hora: ";
	    cout<<x;
	    cout<<":"<<minuto;
	    cout<<":"<<segundo;
	    cout<<" pm";
	} else {
        cout<<"Esta es la hora: ";
        cout<<hora;
        cout<<":"<<minuto;
        cout<<":"<<segundo;
        cout<<" am";
    }   
    return 0;
	
	}
