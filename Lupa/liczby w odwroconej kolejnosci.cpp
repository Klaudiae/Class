//Liczby z przedziału w odwróconej kolejności		
#include<iostream>
using namespace std;

int main()
{
	//deklarujemy dwie zmienne typu całkowitego, początek i koniec przedziału
	int a, b;
	//wczytujemy dane z klawiatury
	//cout<<"Podaj początek przedziału: ";
	cout<<"\n\nPodaj kres gorny i dolny zbioru: ";
	cin>>a;	
	//cout<<"Podaj koniec przedziału: ";
	cin>>b;
	//cout<<"Liczby z przedziału ["<<a<<", "<<b<<"] w odwróconej kolejności: ";

	while(b >= a)
	{
		cout<<b<<" ";
		--b;
	}	
	return 0;
}
