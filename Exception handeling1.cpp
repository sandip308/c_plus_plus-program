#include<iostream>
using namespace std;
main()
{
	int a,b;
	cout<<"Enter a value of a and b"<<endl;
	cin>>a>>b;
	int c=a-b;
	try
	{
		if(c!=0)
		{
			cout<<"Result="<<(float)a/c<<endl;
		}
		else
		{
			throw (c);
		}
	}
		catch(int i)
		{
			cerr<<"Exeception caught :"<<i;
		}
		cout<<endl<<"END";
}
