#include<iostream>
using namespace std;
class complex
{
	int a,b;
	public:
		void set_data();
		void show_data();
		complex operator+(complex );
};
void complex::set_data()
{
	cout<<"Enter 1st complex number real value & imaginary value"<<endl;
	cin>>a>>b;
}
complex complex::operator+(complex c)
{
	complex temp;
	temp.a=a+c.a;
	temp.b=b+c.b;
	return (temp);
}
void complex::show_data()
{
	cout<<"The sum of two complex number is="<<endl;
	cout<<a<<"+ i"<<b;
}
main()
{
	complex c1,c2,c3;
	c1.set_data();
	c2.set_data();
	c3=c1+c2;    //c3=c1.operator+(c2);
	c3.show_data();
	return 0;
}
