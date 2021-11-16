/*Liczba bezwzgledna*/
#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	double x;
	cout<<"Podaj liczbe: ";
	cin>>x;
	
	cout<<"|"<<x<<"| = ";
	
	if(x<0) //jesli jest ujemna, nalezy zmienic znak
		cout<<-x<<endl; 
	else //w przeciwnym razie nic sie nie zmienia
		cout<<x<<endl; 
	
cin.ignore();
getchar();
return 0;
}
