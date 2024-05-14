/* program using long long */
# include<iostream>
# include<conio.h>
using namespace std;
long long convert(long long x)
{
	long long dec, mul=1, sum =0;
	while(x!=0)
	{
		dec = x%2;
		x = x/2;
		sum+=dec*mul;
		mul*=10;
	}
	return sum;
}
int main(void)
{
	long long binary, decimal;
	cout<<"Enter the decimal number"<<endl;
	cin>>decimal;
	binary = convert(decimal);
	cout<<"Here is the value of binary: "<<binary<<endl;
	getch();
	return 0;
}
