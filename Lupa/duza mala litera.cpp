/* Napisz program, kt�ry stwierdzi, czy podany 
znak jest du�� liter�, ma�� liter�, cyfr�, czy innym znakiem.*/

#include<iostream>
#include<cmath>
using namespace std;

int main()
{	
	char znak;
	
	cout<<"Podaj znak: ";
	cin>>znak;
	
	if(znak>='a'&&znak<='z')
		cout<<"Mala litera\n";
	else
		if(znak>='A'&&znak<='Z')
			cout<<"Duza litera\n";
		else
			if(znak>='0'&&znak<='9')
				cout<<"Cyfra\n";
			else
				cout<<"Inny znak\n";
		
		cin.ignore();
		getchar();
		
	return 0;
}
