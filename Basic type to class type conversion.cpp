#include<iostream>
using namespace std;
class complex
{
	int a,b;
	public:
		complex()
		{
		}
		complex(int k)
		{
			a=k;b=0;
		}
		void setdata(int x,int y)
		{
			a=x; b=y;
		}
		void showdata()
		{
			cout<<"a="<<a<<"b="<<b;
		}
};
main()
{
	complex c1;
	int x=5;
	c1=x;   //c1.complex(x);->(THIS IS NOT A SYNTAX, JUST FOR UNDERSTANDING PURPOSE;
	c1.showdata();
}
