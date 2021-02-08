#include<iostream>
using namespace std;
int main()
{
	int a,b,sum;
	int sum_func(int ,int );//declaration of function
	cout<<"enter the numbers a,b";
	cin>>a>>b;
	sum=sum_func(a,b);//calling the function
	cout<<"the sum of the no.'s is"<<sum;
}
int sum_func(int x,int y)
{
	int add=x+y;
	return add;
}
