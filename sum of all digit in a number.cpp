#include<iostream>
using namespace std;
main()
{
	int a,n,x,s=0;
	cout<<"Enter a number"<<endl;
	cin>>n;
	while(n>0)
	{
		x=n%10;
		s=s+x;
		n=n/10;
	}
	cout<<"Sum of all digit in a number is="<<s;
}
