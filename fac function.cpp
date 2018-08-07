#include<iostream>
using namespace std;
int fac(int);
main()
{
	int p,z;
	cout<<"Enter a number"<<endl;
	cin>>p;
	z=fac(p);
	cout<<"The value of factorial is "<<p<<"! ="<<z;
}
int fac(int x)
{
	int i,s=1;
	for(i=1;i<=x;i++)
	{
		s=s*i;
	}
	return (s);
}
