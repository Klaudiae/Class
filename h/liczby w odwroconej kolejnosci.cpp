//Liczby z przedzia�u w odwr�conej kolejno�ci		
#include<iostream>
using namespace std;

int main()
{
	//deklarujemy dwie zmienne typu ca�kowitego, pocz�tek i koniec przedzia�u
	int a, b;
	//wczytujemy dane z klawiatury
	//cout<<"Podaj pocz�tek przedzia�u: ";
	cout<<"\n\nPodaj kres gorny i dolny zbioru: ";
	cin>>a;	
	//cout<<"Podaj koniec przedzia�u: ";
	cin>>b;
	//cout<<"Liczby z przedzia�u ["<<a<<", "<<b<<"] w odwr�conej kolejno�ci: ";

	while(b >= a)
	{
		cout<<b<<" ";
		--b;
	}	
	return 0;
}
