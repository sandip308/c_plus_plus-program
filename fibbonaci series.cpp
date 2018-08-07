#include<iostream>
using namespace std;
main()
{
	int a=0,b=1,c,n,i;
	cout<<"Enter a range"<<endl;
	cin>>n;
	cout<<endl<<a<<endl<<b;
	for(i=2;i<n;i++)
	{
		c=a+b;
		a=b;
		b=c;
	   cout<<endl<<c<<endl;
	}
	
}
