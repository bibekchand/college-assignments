#include <iostream>
#include <cmath>
// #include <bits/stdc++.h>
using namespace std;
#define EPS 0.0001

/*This program finds the root of the equation f(x)= logx - sinx using the bisection method*/
double function(double val)
{
	return (log(val) - sin(val));
}

void algorithm(double x1, double x2)
{

	double midpoint = 0, func1 = 0, func2 = 0, midfunc = 0, newx1 = x1, newx2 = x2;
	func1 = function(newx1);
	func2 = function(newx2);
	midpoint = (newx1 + newx2) / 2;
	midfunc = function(midpoint);
	if ((func1 * func2) < 0)
	{
		while(abs(midfunc)>=EPS)
		{
			if (midfunc == 0.0)
			{
				cout << "This is your root: " << midpoint << endl;
			}
			if ((midfunc * func1) < 0)
			{
				newx2 = midpoint;
				func2 = midfunc;
			}
			else
			{
				newx1 = midpoint;
				func1 = midfunc;
			}
			midpoint = (newx1 + newx2) / 2;
		    midfunc = function(midpoint);
		}
		cout << "This is your root" << midpoint << endl;
		return;
	}
	else
	{
		cout << "You have not assumed the right bracket" << endl;
		return;
	}
}
int main()
{
	double x1, x2, func1, func2, mid, funcmid;
	cout << "Enter the first value" << endl;
	cin >> x1;
	cout << "Enter the second value" << endl;
	cin >> x2;
	algorithm(x1, x2);

	return 0;
}
