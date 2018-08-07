#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
main()
{
	char string[100];
	cout<<"Enter a object or string"<<endl;
	cin.getline(string,100);
	int len=strlen(string);
	fstream file;
	file.open("New file",ios::out);
    for(int i=0;i<len;i++)
    {
    	file.put(string[i]);
	}
	file.seekg(0);
	file.close();
	file.open("New file",ios::in);
	while(!file.eof())
	{
		file.get(string,100);
		cout<<string;
	}
	file.close();
}
