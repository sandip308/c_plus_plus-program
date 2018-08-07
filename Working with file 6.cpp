#include<iostream>
#include<fstream>
using namespace std;
	class person
	{
		private:
			char name[100];
			int age;
			public:
				void getData();
				void Display();
	};
	void person::getData()
	{
		cout<<"Enter your name"<<endl;
		cin.getline(name,100);
		cout<<"Enter your age"<<endl;
		cin>>age;
	}
	void person::Display()
	{
		cout<<"Name is="<<name<<endl;
		cout<<"Age is="<<age;
	}
	main()
	{
		person p1;
		ofstream dout;
		dout.open("My file6.txt",ios::out);
		p1.getData();
		p1.Display();
		dout.write((char*)&p1,sizeof(p1));
		dout.close();
	}
