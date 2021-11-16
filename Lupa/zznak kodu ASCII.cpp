/*znak kodu ASCII*/
#include<iostream>
using namespace std;

int main()
{
int kod;
char znak;
cout << endl<<"Podaj znak: ";
cin >> znak;
kod=(int)znak;
cout <<endl<< "ASCII kod: " << kod ;

cin.ignore();
getchar();
return 0;
}
