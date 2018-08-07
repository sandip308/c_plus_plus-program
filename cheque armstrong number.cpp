#include<iostream>
using namespace std;
main()
{
	int n,i,s=0;
	cout<<"Enter a number"<<endl;
	cin>>n;
	int temp=n;
	while(n>0)
	{
		i=n%10;
		s=s+i*i*i;
		n=n/10;
	}
	if(temp==s)
	{
		cout<<"The number is armstrong number"<<endl;
	}
	else
	cout<<"The number is not a armstrong number"<<endl;
}
