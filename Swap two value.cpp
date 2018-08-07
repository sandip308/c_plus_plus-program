#include<iostream>
using namespace std;
void inline swap(int *,int *);
main()
{
	int a,b;
	cout<<"Enter two value"<<endl;
	cin>>a>>b;
	swap(&a,&b);
}
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	cout<<"After swaping the value ="<<endl<<*x<<endl<<*y;
}
