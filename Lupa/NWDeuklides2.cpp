/*algorytm euklidesa ver1*/
#include <iostream>
using namespace std;

int main( )
{
  unsigned int a, b;
  cout<<endl<<"Podaja,b: "<<endl;
  cin >> a >> b;
  while( a != b )
    if( a < b ) 
	b -= a; 
	else 
	a -= b;
  cout << a << endl;
  
  cin.ignore();
  getchar();
  return 0;
} 
