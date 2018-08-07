#include<iostream>
using namespace std;
class complex
{
	float a,b;
	public:
		void setdata(float x,int y)
		{
			a=x;b=y;
		}
		void showdata()
		{
			cout<<"a="<<a<<endl<<"b="<<b;
		}
		operator float()
		{
			return (a);
		}
};
main()
{
	complex c1;
	c1.setdata(3.5,4);
	c1.showdata();
	float x;
	x=c1;  //x=c1.operator float();->(THIS IS NOT SYNTAX, JUST FOR UNDERSTANDING PURPOSE);
	cout<<"\n x="<<x;
}
