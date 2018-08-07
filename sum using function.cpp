#include<iostream>
using namespace std;
int inline sum(int,int);
 main()
{
	int a,b,z;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	z=sum(a,b);
	cout<<"The sum is="<<z;
}
int sum(int x,int y)
{
	return (x+y);
}
