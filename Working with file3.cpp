#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ofstream fout;
	fout.open("File1.txt",ios::out);
	fout<<"The capital of india is"<<endl;
	fout<<"New Delhi"<<endl;
	fout.close();
	fout.open("File2.txt",ios::out);
	fout<<"United states of America"<<endl;
	fout<<"The Avangers"<<endl;
	fout.close();
	//reading from two files
	char ch;
	ifstream fin;
	fin.open("File1.txt",ios::in);
	cout<<"The file1 contents are :"<<endl;
	while(!fin.eof())
	{
		ch=fin.get();
		cout<<ch;
	}
	fin.close();
	fin.open("File2.txt",ios::in);
	cout<<"The File2 contents are :"<<endl;
	while(!fin.eof())
	{
		ch=fin.get();
		cout<<ch;
	}
}
