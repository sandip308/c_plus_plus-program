#include<iostream>
using namespace std;
class comp
{
	int a,b;
	public:
		void input();
		comp add(comp);
		void display();
};
void comp::input(void)
{
	cout<<"Enter two(one number for real one for imaginary)numbers"<<endl;
	cin>>a>>b;
}
comp comp::add(comp c)
{
	comp temp;
	temp.a=a+c.a;
	temp.b=b+c.b;
	return(temp);
}
void comp::display(void)
{
	cout<<"The add of two complex number is="<<endl;
	cout<<a<<"+ i"<<b;
}
main()
{
	comp c1,c2,c3;
	c1.input();
	c2.input();
	c3=c1.add(c2);
	c3.display();
}

