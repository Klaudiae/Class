/*�rednia arytmetyczbna*/
#include <iostream>
using namespace std;

int main()
{

	double suma = 0, //zmienna przechowuje sum� liczb 
	liczba; //zmienna przechowuje kolejne liczby podawane z klawiatury
	unsigned int n; //zmienna odpowiedzialna za ilo�� liczb pdoanych z klawiatury
	
	cout<<"Z jakiej ilosci liczb chcesz liczyc srednia arytmetyczna: ";
	cin>>n;
	cout<<endl;

	if(n>0) //�redni� arytmetyczn� mo�na wyznacza� tylko z dodatniej ilo�ci liczb
	{
		int i = 1;
		while(i<=n)
		{
			cout<<"Podaj "<<i++<<" liczbe: ";
			cin>>liczba;
			suma+=liczba; //lub suma = suma + liczba
		}
		cout<<"Srednia "<<n<<" liczb wynosi: "<<suma/n<<endl;
	}
	else
	cout<<"Podales nieprawid�owa wartosc zmiennej n"<<endl;

	return 0;
}
