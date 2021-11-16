//Liczby z przedzia³u w odwróconej kolejnoœci		
#include<iostream>
using namespace std;

int main()
{
	//deklarujemy dwie zmienne typu ca³kowitego, pocz¹tek i koniec przedzia³u
	int a, b;
	//wczytujemy dane z klawiatury
	//cout<<"Podaj pocz¹tek przedzia³u: ";
	cout<<"\n\nPodaj kres gorny i dolny zbioru: ";
	cin>>a;	
	//cout<<"Podaj koniec przedzia³u: ";
	cin>>b;
	//cout<<"Liczby z przedzia³u ["<<a<<", "<<b<<"] w odwróconej kolejnoœci: ";

	while(b >= a)
	{
		cout<<b<<" ";
		--b;
	}	
	return 0;
}
