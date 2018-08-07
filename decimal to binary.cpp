#include<iostream>
using namespace std;
int main()
{
	int i,n,binary=0,j=1;
	cout<<"Enter a decimal number"<<endl;
	cin>>n;
	while(n>0)
	{
		i=n%2;
		binary=binary+(i*j);
		n=n/2;
		j=j*10;
	}
	cout<<"The corosponding binary number of this decimal number is="<<binary<<endl;
}
