/*Napisz program, który policzy pole trójk¹ta ze wzoru Herona, 
uwzglêdniaj¹c czy z trzech podanych boków mo¿na stworzyæ trójk¹t.
Obliczanie pola trójk¹ta wzór Herona*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{	
	double a, b, c;
	cout<<"Podaj dlugosci bokow trojkata: ";
	cin>>a>>b>>c;
	//sprawdzenie czy z boków da siê zbudowaæ trójk¹t
	if(a>0&&b>0&&c>0) //sprawdzenie czy boki s¹ dodatnie
		if(a+b>c&&a+c>b&&b+c>a) //sprawdzenie czy da siê zbudowaæ trójk¹t
		{
			double p = (a+b+c)/2.0;
			cout<<"Pole trojkata wynosi: "<<sqrt(p*(p-a)*(p-b)*(p-c))<<endl;
		}
		else
			cout<<"Z tych bokow nie da siê zbudowac trojkata\n";
	else
		cout<<"Boki musza byæ dodatnie\n";	
	return 0;
}

