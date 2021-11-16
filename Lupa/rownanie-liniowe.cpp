#include <iostream>

using namespace std;

//int main()
//{	
//	double a, b; 
//	cout<<"Podaj a: ";
//	cin>>a;
//	cout<<"Podaj b: ";
//	cin>>b;
//	if(a!=0.0)
//		cout<<"x = "<<-b/a<<endl;
//	else
//		if(b==0.0)
//			cout<<"Niesko�czenie wiele miejsc zerowych\n";
//		else
//			cout<<"Brak miejsc zerowych\n";
//	return 0;
//}

int main()
{
	double a;
	double b;

	cout << "Podaj a: "; cin >> a;
	cout << "Podaj b: "; cin >> b;

	if (a != 0.0)
	{
		cout << "x = " << -b/a;
	}
	else if (b == 0.0)
	{
		cout << "Nieskonczenie wiele miejsc zerowych";
	}
	else
	{
		cout << "Brak miejsc zerowych";
	}

	return(0);
}