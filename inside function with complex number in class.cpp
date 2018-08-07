#include<iostream>
using namespace std;
class complex
{
	private:
		int a,b;
		public:
			void input()
			{
				cout<<"Enter two(one number for real one for imaginary)numbers"<<endl;
				cin>>a>>b;
			}
			complex add(complex c)
			{
				complex temp;
				temp.a=a+c.a;
				temp.b=b+c.b;
				return(temp);
			}
			void display()
			{
				cout<<"The add of two complex number is="<<endl;
				cout<<a<<"+ i"<<b;
			}
};
main()
{
	complex c1,c2,c3,c4;
	c1.input();
	c2.input();
	c3=c1.add(c2);
	c3.display();
}
