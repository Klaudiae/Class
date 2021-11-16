#include <iostream>
#include <cmath>

using namespace std;

void check_char (char);

int main()
{
	char sign;

	cout << "Podaj znak: ";
	cin.get(sign);

	check_char(sign);

	return(0);
	
}

void check_char(char sign)
{
	if (sign >= 'a' && sign <= 'z')
	{
		cout << sign << " to mala litera";
	}
	else if (sign >= 'A' && sign <= 'Z')
	{
		cout << sign << " to duza litera";
	}
	else if (sign >= '0' && sign <= '9')
	{
		cout << sign << " to cyfra";
	}
	else
	{
		cout << sign << " to inny znak";
	}
}