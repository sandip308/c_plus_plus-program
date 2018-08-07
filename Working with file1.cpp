#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ofstream fout;
	char ch[30];
	fout.open("My file.txt",ios::out);
	cout<<"Enter your name"<<endl;
	cin.getline(ch,30);
	fout<<ch;
	fout.close();
}
