#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ofstream fout;
	char ch[50];
	fout.open("My file5.txt",ios::out);
	cout<<"Enter a string"<<endl;
	cin.getline(ch,50);
	fout<<ch;
	fout.close();
	ifstream fin;
	fin.open("My file5.txt",ios::in);
	while(!fin.eof())
	{
		fin.get(ch,50);
	}
	ofstream dout;
	dout.open("My file4.txt",ios::out);
	dout<<ch;
	fin.close();
	dout.close();
}
