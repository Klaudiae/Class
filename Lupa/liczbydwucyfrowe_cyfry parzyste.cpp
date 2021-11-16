/*Napisz program, który sprawdzi, czy wszystkie 
cyfry dwucyfrowej liczby s¹ parzyste */
#include<iostream>
using namespace std;

int main()
{	
	int liczba;
	
	cout<<"Podaj dwucyfrowa liczbe: ";
	cin>>liczba;
	
	if(!(liczba>9 && liczba<100))
		cout<<"Podana liczba nie jest dwucyfrowa!\n";
	else
		if((liczba%2==0 && (liczba/10)%2 == 0) )
			cout<<"TAK\n";
		else
			cout<<"NIE\n";
	
	return 0;
}
