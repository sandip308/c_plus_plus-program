#include<iostream>
using namespace std;
main()
{
	int n,i,fact=1,temp,sum=0,x;
	cout<<"Enter a number\n";
	cin>>n;
	temp=n;
	while(n>0)
	{
		x=n%10;
		fact=1;
		for(i=1;i<=x;i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		n=n/10;
	}
	if(temp==sum)
	{
		cout<<"The number is a armstrong number";
	}
	else
	cout<<"The number is not a armstrong number"<<endl;
}
