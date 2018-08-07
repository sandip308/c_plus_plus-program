#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int i,n,s=0,x;
	cout<<"Enter a range"<<endl;
	cin>>n;
	cout<<"The armstrong number within range is="<<endl;
	for(i=1;i<=n;i++)
	{
		int temp1=i;
		int temp2=i;
		s=0;
		while(temp1>0)
		{
			x=temp1%10;
			s=s+pow(x,3);
			temp1=temp1/10;
		}
		if(temp2==s)
		{
			cout<<endl<<s<<endl;
		}
	}
}
