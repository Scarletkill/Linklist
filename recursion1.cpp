#include<iostream>
using namespace std;
int factorialnum(int n)
{
	if(n==0)
	{
		return (1);
	}
	else
	{
		return (n*factorialnum(n-1));
	}
}
int main()
{
	int factorialnum(int);
	int facto,value;
	cout<<"Enter the number to find the factorial of it:";
	cin>> value;
	facto = factorialnum(value);
	cout<< "the factorial of given number is :"<<facto<<endl;
	return 0;
}
