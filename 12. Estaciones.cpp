#include "stdafx.h"
#include<iostream>
#include <conio.h>
#include "math.h"

using namespace std;

void main()
{
	int dia,mes,ano;
	cout<< "Las estaciones del ano"<<endl;
	cout<< "Ingresar la fecha "<<endl;
	cout<< "Ingresar el dia (1-30): ";
	cin>>dia;
	cout<< "Ingresar el mes (1-12): ";
	cin>>mes;
	cout<< "Igresar el ano: ";
	cin>>ano;
	if ((mes>=1)&&(mes<=3))
		cout<<"Es verano del "<<ano;
	else {
		if (mes==3)
		{
			if ((dia>=21)&&(dia<=21))
				cout<<"Es verano del "<<ano;
		
		}
		else 
                if ((mes>=4)&&(mes<=6))
                    cout<<"Es otoño del "<<ano<<endl; 
                        if (mes==6)
                        {
                            if ((dia>=21)&&(dia<=21))
                                cout<<"Es Otoño del "<<ano<<endl;
                            
                        }
                        else 
                            if ((mes>=7)&&(mes<=9))
                                cout<<"Es Invierno del "<<ano<<endl;
                                    if (mes==9)
                                    {
                                        if ((dia>=21)&&(dia<21))
                                            cout<<"Es Invierno del "<<ano<<endl;
                                       
                                    }
                                    else 
                                        if ((mes>=10)&&(mes<=12))
                                            cout<<"Es Primavera del "<<ano<<endl;
                                                if (mes==12)
                                                {
                                                    if ((dia>=21)&&(dia<=21))
                                                        cout<<"Es Primavera del "<<ano<<endl;
                                         
												}
	}
	getch();
}

			
			

	
	
