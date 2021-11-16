/*Napisz program, który wypisze numer pozycji w alfabecie podanej 
na wejœciu du¿ej (ma³ej) litery .*/
#include<iostream>
using namespace std;

int main()
{
	//deklarujemy jedn¹ zmienn¹ typu znakowego
	char znak;
	//wczytujemy dane z klawiatury
	cout<<endl<<"Podaj duza litere: ";
	cin>>znak;
	
	//kod ASCII du¿ej litery A wynosi 65, litery B - 66 itd.
	cout<<znak%64; //lub cout<<znak - 'A' + 1;
	
	//kod ASCII malej litery a wynosi 97, litery b - 98 itd.
	//cout<<znak%96; //lub cout<<znak - 'a' + 1;
	
	return 0;
}
