/*Napisz program, kt�ry wystawi ocen� z testu. U�yj zagnie�d�onej instrukcji if - else*/
#include<iostream>

using namespace std;

int main()
{
	unsigned int points;

	cout << "Podaj liczbe punktow: "; cin >> points;

	if (points > 100)
	{
		cout << "Podana liczba nie jest z przedzialu od 1 do 100!";
	}
	else if (points < 40)
	{
		cout << "Ocena ndst";
	}
	else if (points < 55)
	{
		cout << "Ocena dop";
	}
	else if (points < 70)
	{
		cout << "Ocena dst";
	}
	else if (points < 85)
	{
		cout << "Ocena db";
	}
	else if (points < 98)
	{
		cout << "Ocena bdb";
	}
	else
	{
		cout << "Ocena bdb";
	}

	return(0);
}