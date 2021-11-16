/*Napisz program, kt�ry policzy pole tr�jk�ta ze wzoru Herona, 
uwzgl�dniaj�c czy z trzech podanych bok�w mo�na stworzy� tr�jk�t.
Obliczanie pola tr�jk�ta wz�r Herona*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{	
	double a, b, c;
	cout<<"Podaj dlugosci bokow trojkata: ";
	cin>>a>>b>>c;
	//sprawdzenie czy z bok�w da si� zbudowa� tr�jk�t
	if(a>0&&b>0&&c>0) //sprawdzenie czy boki s� dodatnie
		if(a+b>c&&a+c>b&&b+c>a) //sprawdzenie czy da si� zbudowa� tr�jk�t
		{
			double p = (a+b+c)/2.0;
			cout<<"Pole trojkata wynosi: "<<sqrt(p*(p-a)*(p-b)*(p-c))<<endl;
		}
		else
			cout<<"Z tych bokow nie da si� zbudowac trojkata\n";
	else
		cout<<"Boki musza by� dodatnie\n";	
	return 0;
}

