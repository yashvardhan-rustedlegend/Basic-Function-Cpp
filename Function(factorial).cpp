#include<iostream>
using namespace std;
int main()
{
	int n,factorial;
	int fact_func(int);//declaration of function
	cout<<"enter the number";
	cin>>n;
	factorial=fact_func(n);//calling the function
	cout<<"the factorial of the no. is"<<factorial;
}
int fact_func(int x)
{
	int fact=1;
	if(x==0)
	return 1;
	else
	for(int i=x;i>=1;i--)
	{
		fact=fact*i;
	}
	return fact;
}
