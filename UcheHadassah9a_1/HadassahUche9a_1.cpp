/*
This is the program of a non-recursive fibonacci function
-The reason why the recursive fibonacci function is ineffective is due 
to the repeated calculations of the same Fibonacci numbers.
*/
#include<iostream>
using namespace std;

long  fibonacci(long n)
{
	if (n == 0 || n == 1)
	{ 
		return n;
	}

	long x = 0;//Make this the first value in the fibonacci sequence
	long y = 1;//and this the second value
	long result = 0;
	for (long i = 1; i < n; i++)
	{
		result = x + y;//Calcultes the sum of the previous two numbers
		x = y;//x becomes the previous number
		y = result;//and y becomes the current number
	}
	return result;//Returns the result after the loop has terminated
}

//Added a main even though the question didnt ask for it since my code wouldn't run without it
int main()
{
  long n;
  cout << "Enter a number:";
  cin >> n;
  cout << "\nThe fib of " << n << " is: " << fibonacci(n);
}