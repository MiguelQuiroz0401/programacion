#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;

void sumapares(int n,int &i);
int main()
{
	int i=0, n;
	cout<<"Ingrese el numero: ";
	cin>>n;
	sumapares(n,i);
	cout<<"El numero tiene "<<i<<" numeros pares";
	getch();
	return 0;
}

void sumapares(int n, int &i)
{
	while(n>0)
	{
		if(n%2==0)	//n=123
		{
		n=n/10;			//n=123
		i++;
		}
		else{
		n=n/10;	//n=12
		}
	}

}