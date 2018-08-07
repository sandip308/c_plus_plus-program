#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"After swap=\n"<<a<<endl<<b;
	return 0;
}
