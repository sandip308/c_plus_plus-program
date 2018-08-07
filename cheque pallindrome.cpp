#include<iostream>
using namespace std;
main()
{
	int rev=0,n,x,temp;
	cout<<"Enter a number"<<endl;
	cin>>n;
	temp=n;
	while(n!=0)
	{
		x=n%10;
		rev=rev*10+x;
		n=n/10;
	}
	if(temp==rev)
	cout<<"The number is pallindrome"<<endl;
	else
	cout<<"The number is not pallindrome"<<endl;
}
