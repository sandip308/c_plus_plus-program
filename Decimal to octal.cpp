#include<iostream>
using namespace std;
main()
{
	int n,i,j=1,s=0;
	cout<<"Enter a decimal number"<<endl;
	cin>>n;
	while(n!=0)
	{
		i=n%8;
		s=s+(i*j);
		n=n/8;
		j=j*10;
	}
	cout<<"The corrosponding octal number of this decimal number is="<<s;
}
