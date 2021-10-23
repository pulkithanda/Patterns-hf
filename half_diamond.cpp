#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"enter number: ";
	cin>>n;
	for(j=1; j<=n; j++)
	{
		for(i=n-1; i>=j; i--)
		{
			cout<<" ";
		}
		for(i=1; i<=j; i++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
		for(j=n-1; j>=1; j--)
	{
		for(i=n-1; i>=j; i--)
		{
			cout<<" ";
		}
		for(i=1; i<=j; i++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
