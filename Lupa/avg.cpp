#include <iostream>

using namespace std;

int main()
{
	double suma = 0;
	double liczba;
	double avg;
	unsigned int n;

	cout << "Z ilu liczb chcesz obliczyc srednia: "; cin >> n;

	if (n > 0)
	{
		int i = 1;
		while (i <= n)
		{
			cout << "Podaj liczbe nr " << i++ << " "; cin >> liczba;
			suma = suma + liczba;
		}

		avg = suma / n;
		cout << "Srednia tych liczb to " << avg;
	}
	else
	{
		cout << "Ilosc liczba musi byc nieujemna!";
	}

	return(0);
}
