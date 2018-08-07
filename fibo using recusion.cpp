#include<iostream>
using namespace std;
int inline fibo(int);
int main()
{
	int n,z=0,i;
	cout<<"Enter a range"<<endl;
	cin>>n;
	fibo(n);
	cout<<"The fibonacci series is="<<endl;
	for(i=1;i<=n;i++)
	{
		cout<<fibo(z)<<endl;
		z++;
	}
	return 0;
}
int fibo(int x)
{
	if(x==0)
	{
		return 0;
	}
	else if(x==1)
	{
	  return 1;
	}
	else
	{
		return fibo(x-1)+fibo(x-2);
	}
	
}
