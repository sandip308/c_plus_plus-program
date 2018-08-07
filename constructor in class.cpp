#include<iostream>
using namespace std;
class complex
{
	private:
		int a,b;
		public:
			complex(int x,int y)//peramitarized constructor  
			{
				a=x; 
              	b=y;
              	cout<<"The value of x and y is="<<a<<","<<b<<endl;
			}
			complex() //Default constructor 
			{
			}        
			complex(complex& c) //copy constructor 
			{
				 a=c.a;
 	             b=c.b;
 	             cout<<"The value of a and b is="<<a<<","<<b;
			}
};
main()
{
	complex c1,c2(3,4)/*call peramiterized constructor*/;
	complex c3(c2);//call copy constructor using reference variable
}
