#include<iostream>
using namespace std;
class complex
{
	int a,b;
	public:
		void set_data(int x,int y)
		{
			a=x;
			b=y;
		}
		void display()
		{
			cout<<"a="<<a<<"b="<<b;
		}
	friend void fun(complex c);
};
void fun(complex c)
{
   cout<<"Sum is="<<c.a+c.b<<endl;
}
main()
{
	int m,n;
	complex c1;
	cout<<"Enter two values"<<endl;
	cin>>m>>n;
	c1.set_data(m,n);
	fun(c1);
	c1.display();
	
}
