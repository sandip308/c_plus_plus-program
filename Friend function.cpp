#include<iostream>
using namespace std;
class item
{
	private:
		int a,b;
		public:
			void input(int X,int Y)
			{
				a=X;
				b=Y;
			}
			friend void fun(item);
};
void fun(item c)
{
	cout<<"The sum is="<<c.a+c.b;
}
main()
{
	int m,n;
	item c1;
	cout<<"Enter two value"<<endl;
	cin>>m>>n;
	c1.input(m,n);
	fun(c1);
}
