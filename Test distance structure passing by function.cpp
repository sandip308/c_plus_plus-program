#include<iostream>
using namespace std;
struct dis
{
	int feet;
	float inch;
};
void display(dis d)
{
	cout<<"Feet is="<<d.feet<<"Inch is="<<d.inch<<endl;
}
main()
{
	 dis d1,d2,c;
	cout<<"Enter the 1st feet & inches"<<endl;
	cin>>d1.feet>>d1.inch;
	cout<<"Enter the 2nd feet & inches"<<endl;
	cin>>d2.feet>>d2.inch;
	display(d1);
	display(d2);
}
