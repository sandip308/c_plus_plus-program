#include<iostream>
using namespace std;
struct book
{
	int book_id;
	float price;
	char book_name[20];
	void input()
	{
		cout<<"Enter book name"<<endl;
		gets(book_name);
		fflush(stdin);
		cout<<"Enter the bookid & price"<<endl;
		cin>>book_id>>price;
		fflush(stdin);
	}
	void output()
	{
		cout<<"The book name is="<<endl;
		puts(book_name);
		cout<<"The bookid & price is="<<endl<<book_id<<endl<<price;
	}
};
main()
{
  book b1,b2;
  b1.input();
  b1.output();
  b2.input();
  b2.output();
}
