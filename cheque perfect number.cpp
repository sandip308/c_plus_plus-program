#include<iostream>
using namespace std;
main()
{
	int n,i,s=0;
	cout<<"Enter a number"<<endl;
	cin>>n;
	int t=n;
	for(i=1;i<n;i++)
	{
	  if(n%i==0)
	  {
	  	s+=i;
	  }
	}
	if(s==t)
	{
		cout<<"The number is a perfect number"<<endl;
	}
	else
	cout<<"The number is not a perfect number"<<endl;
}
