/*Name:Uche Hadassah
This program calculates the result when a double(x) is raised to the power of an integer(n)*/
#include <iostream>
using namespace std;
int power(double, int);//Function Prototype
int main()
{
	double Num;
	int Pow;
	cout << "Enter the number: ";
	cin >> Num;
	cout << "Enter the power:";
	cin >> Pow;
	cout << Num << "^" << Pow << " is " << power(Num, Pow) << endl;//calling the function
	return 0;
}
int power(double x, int n)
{
	double Power = 1.0;//initialize power to 1 since we'll be multiplying it
	while (n > 0)
	{
		Power *= x;
		n--;
	}
	return Power;
}