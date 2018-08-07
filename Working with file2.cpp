#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ifstream fin;
	char ch;
	fin.open("My file.txt",ios::in);
	ch=fin.get();
	while(!fin.eof())
	{
		cout<<ch;
		ch=fin.get();
	}
	fin.close();
}
