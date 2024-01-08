/*The greatest common divisor (gcd) of two integers p and q is the largest integer that 
divides both (e.g. gcd of 18 and 12 is 6). An algorithm to compute the greatest 
common divisor of two integers p and q is the following: Let r be the remainder of p
divided by q. If r is 0, then q is the greatest common divisor. Otherwise, set p equal 
to q, then q equal to r, and repeat the process.
a) Write a recursive function that implements the above algorithm.
b) Write a non-recursive function that implements the above algorithm.*/#include<iostream>using namespace std;//a) Recursive gcd functionint gcd(int p, int q){	int r = p % q;	if (r == 0)		return q;	else		return gcd(q,r);}//b) Non-recursive gcd functionint gcd(int p, int q){}