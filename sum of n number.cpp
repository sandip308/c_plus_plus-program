#include<iostream>
using namespace std;
main()
{
	int i,n,s=0;
	cout<<"Enter the range"<<endl;
	cin>>n;
	for(i=0;i<=n;i++)
	{
		s=s+i;
	}
	cout<<"The sum is="<<s;
}
