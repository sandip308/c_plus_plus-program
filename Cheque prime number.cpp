#include<iostream>
using namespace std;
main()
{
	int i,n,flag=0;
	cout<<"Enter a number to cheque prime"<<endl;
	cin>>n;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"The number is prime number"<<endl;
	}
	else
	cout<<"The number is not prime number"<<endl;
}
