#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int num,s=0,i,p=0;
	cout<<"Enter a binary number"<<endl;
	cin>>num;
	while(num>0)
	{
		i=num%10;
		s=s+(i*pow(2,p));
		num=num/10;
		p++;
	}
	cout<<"The decimal number of this binary number is="<<s<<endl;
}
