#include<iostream>
using namespace std;
int main()
{
	int n,c=0;
	cout<<"Enter a number : ";
	cin>>n;
	int t=n;
	while(t!=0)
	{
		int d=t%2;
		t=t/2;
		c++;
	}
	int a[c],i=c-1;
	while(n!=0)
	{
		
		int d=n%2;
		n=n/2;
		//cout<<d;
		a[i]=d;
		i=i-1;
	}
	cout<<endl;
	for(int j=0;j<c;j++)
	{
		cout<<a[j];
	}

}