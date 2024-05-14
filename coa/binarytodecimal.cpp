/* program using long long */
# include<iostream>
# include<conio.h>
using namespace std;
int convert(int x)
{
	int remainder, mul=1, sum =0;
	while(x!=0)
	{
		remainder = x%10;
		x = x/10;
		sum+=(remainder*mul);
		mul*=2;
	}
	return sum;
}
int main(void)
{
	int binary, decimal;
	cout<<"Enter the binary number"<<endl;
	cin>>binary;
	decimal = convert(binary);
	cout<<"Here is the value of decimal:"<<decimal<<endl;
	getch();
	return 0;
}
