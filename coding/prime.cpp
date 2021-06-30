#include<iostream>
using namespace std;

int isPrime(int x)
{
	int flag=0;
	for(int i=2;i<x;i++)
	{
		if(x%i==0)
		{
			cout<<"Non Prime"<<endl;
			flag=1;
			break;
		}
	}
	return flag;
}

int main()
{
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	int a=isPrime(n);
	if(a==0)
	{
		cout<<"Prime"<<endl;
	}
}