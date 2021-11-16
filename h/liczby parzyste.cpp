//Wypisz n kolejnych liczb parzystych pocz¹wszy od liczby 2		
#include<iostream>
using namespace std;

int main()
{
	//deklarujemy dwie zmienne ca³kowite: 
	//n - iloœæ liczb do wypisania, 
	//a - przechowywaæ bêdzie kolejne liczby parzyste
	int n, a = 2,i=0;
	//wczytujemy dane z klawiatury
	cout<<"Podaj ile liczb parzystych chcesz wypisac: ";
	cin>>n;
	while(i < n)
	{
		cout<<a<<" ";
		a += 2;
		++i;
	}	
	return 0;
}
