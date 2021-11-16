/* algorytm euklidesa rozszerzony*/
#include<iostream>
using namespace std;

int main()
{
	int a, b;

	cout<<"Podaj a,b liczby: ";
	cin>>a>>b;
	int c=a;
	int d=b;
	//wyznaczenie NWD
	int pom;
  	while(b!=0)
	{
    	pom = b;
    	b = a%b;
    	a = pom;  
  	}
  	cout<<endl<<"NWD: "<<a<<endl;
	
	//wyznaczenie NWW
	cout<<"NWW("<<a<<","<<b<<") = "<<(c*d)/a<<endl;
	
	cin.ignore();
	getchar();
	
	return 0;
}
