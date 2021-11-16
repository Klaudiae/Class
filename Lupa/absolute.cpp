#include <iostream>
#include <cstdlib>

using namespace std;

double get_abs(double);

int main()
{
	double num;
	double result;

	cout << "Podaj liczbe: ";
	cin >> num;

	result = get_abs(num);
	cout << "| " << num << " | = " << result;

	return(0);
}

double get_abs(double num)
{
	double absolute_val;

	absolute_val = abs(num);

	return(absolute_val);
}