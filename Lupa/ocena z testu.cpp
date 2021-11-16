/*Napisz program, który wystawi ocenê z testu. U¿yj zagnie¿d¿onej instrukcji if - else*/
#include<iostream>

using namespace std;

int main()
{	
	unsigned int punkty;
	
	cout<<"Podaj liczbê punktow [0..100]: ";
	cin>>punkty;
	
	if(punkty > 100)
		cout<<"Podana liczba nie jest z przedzialu [0..100]!\n";
	else
		if(punkty < 40)
			cout<<"ocena niedostateczna\n";
		else
			if(punkty < 55)
				cout<<"ocena dopuszczajaca\n";
			else
				if(punkty < 70)
					cout<<"ocena dostateczna\n";
				else
					if(punkty < 85)
						cout<<"ocena dobra\n";
					else
						if(punkty < 98)
							cout<<"ocena bardzo dobra\n";
						else
							cout<<"ocena celujaca\n";
					
	return 0;
}
