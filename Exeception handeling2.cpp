#include<iostream>
using namespace std;
void divide(int x,int y,int z)
{
	if((x-y)!=0)
	{
		float R;
		R=(float) z/(x-y);
		cout<<"Value of R is="<<R<<endl;
	}
	else
	{
		throw (x-y);
	}
}
main()
{
	try
	{
		int a,b,c;
		cout<<"Enter three numbers"<<endl;
		cin>>a>>b>>c;
		divide(a,b,c);
	}
	catch(int i)
	{
		cerr<<"Execpetion caught :"<<i<<endl;
	}
	cout<<"PROGRAM END"<<endl;
}
