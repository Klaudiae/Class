// to nawet nie działa
#include <iostream>

using namespace std;

//int main( )
//{
//  int a, b, i;
//  cout<<endl<<"Podaj kres dolny i gorny zbioru: ";
//  cin >> a >> b;
//  i = a;
//  if( a % 2 ) i++;
//  while( i <= b )
//  {
//    cout << i << " ";
//    i += 2;        
//  }
//  cout << endl;
//  return 0;
//} 

int main()
{
  int dol, gor;
  int i;

  cout << "Podaj kres dolny zbioru: "; cin >> dol;
  cout << "Podaj kres gorny zbioru: "; cin >> gor;

  i = gor;

  if (i % 2)
  {
    while (i <= dol)
    {
      cout << i << " ";
      i += 2;
    }
  }

  return(0);
}