#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		int b;
		void getdata();
		int get_a();
		void show();
};
class B:public A
{
	int c;
	public:
		void mul();
		void display();
};
void A::getdata()
{
	cout<<"Enter the value of a & b"<<endl;
	cin>>a>>b;
}
int A:: get_a()
{
	return a;
}
void A::show()
{
	cout<<"The value of a is="<<a<<endl;
}
void B::mul()
{
	c=b*get_a();
}
void B::display()
{
	cout<<"a="<<get_a()<<"\n";
	cout<<"b="<<b<<endl;
	cout<<"c="<<c<<endl;
}
main()
{
	B b1;
	b1.getdata();
	b1.mul();
	b1.show();
	b1.display();
}
