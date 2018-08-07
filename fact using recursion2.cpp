#include<iostream>
using namespace std;
int inline fac(int);
int main()
{
	int z,n;
	cout<<"Enter a number that you want to be factorised"<<endl;
	cin>>n;
	z=fac(n);
	cout<<"the factorial is="<<z;
}
int fac(int x)
{
	if(x==0)
	{
		return 1;
	}
	else
	return x*fac(x-1);
}
