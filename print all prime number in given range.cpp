#include<iostream>
using namespace std;
main()
{
	int n,i,j,flag=0;
	cout<<"Enter a range"<<endl;
	cin>>n;
	cout<<"All prime number in given range is="<<endl;
	for(i=2;i<=n;i++)
	{
		flag=1;
		for(j=2;j<=i/2;j++)
		{
		   if(i%j==0)
		   {
		   	flag=0;
		   	break;
		   }
		}
		if(flag==1)
		{
			cout<<endl<<i<<endl;
		}
	}
}
