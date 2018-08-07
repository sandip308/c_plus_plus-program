#include<iostream>
using namespace std;
class Base
{
	public:
		void display()
		{
			cout<<"Base display"<<endl;
		}
		 virtual void show()
		{
			cout<<"Base show"<<endl;
		}
};
class Derived:public Base
{
	public:
		void Display()
		{
			cout<<"Deived display"<<endl;
		}
		void show()
		{
			cout<<"derived show"<<endl;
		}
};
main()
{
	Base *ptr,B1;
	Derived D1;
	ptr=&D1;
	ptr->display();
	ptr->show();
}
