#include<iostream>
using namespace std;
main()
{
	int n,fact=1,i;
	cout<<"Enter a number"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<"The factorial of this number is="<<fact;
}
