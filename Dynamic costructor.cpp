#include<iostream>
#include<string.h>
using namespace std;
class string
{
	char *name;
	int length=0;
	public:
		string()
		{
			
		}
		string(char *s)
		{
			length=strlen(s);
			name=new char[length+1];
			strcpy(name,s);
		}
		void display()
		{
			cout<<name<<endl;
		}
		void join (string &,string &);
};
void string::join (string &x,string &y)
{
	length=x.length+y.length;
	name=new char[length+1];
	strcpy(name,x.name);
	strcpy(name,y.name);
};
main()
{
	char *first="sandip";
	string name1(first),name2("soumen"),name3("saikat"),s1,s2;
	name1.display();
	name2.display();
	name3.display();
	s1.join(name1,name2);
	s2.join(s1,name3);
	s1.display();
	s2.dispaly();
}
