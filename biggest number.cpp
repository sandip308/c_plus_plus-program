#include<iostream>
using namespace std;
main()
{
	int a,b,c,z;
	cout<<"Enter three numbers"<<endl;
	cin>>a>>b>>c;
	z=a>b?(a>c?a:c):(b>c?b:c);
	cout<<"The biggest number is="<<z;
}
