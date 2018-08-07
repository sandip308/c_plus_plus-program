#include<iostream>
using namespace std;
main()
{
	int i,j,k,n,c,p=1;
	cout<<"Enter the number of the rows"<<endl;
	cin>>n;
	c=n-1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=c;j++)
		{
			cout<<" ";
		}
		for(k=1;k<=p;k++)
		{
			cout<<"*";
		}
		c--;
		p=p+2,
		cout<<endl;
	}
}
