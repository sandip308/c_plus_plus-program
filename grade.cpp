#include<iostream>
using namespace std;
main()
{
	cout<<"Enter a number(out of 50)"<<endl;
	int a;
	cin>>a;
	int marks=a/10;
	if(a<=50)
	{
	  switch(marks)
	  {
		case 5:
		cout<<"The grade is O"<<endl;
		break;
		case 4:
		cout<<"The grade is E"<<endl;
		break;
		case 3:
		cout<<"The grade is Very good"<<endl;
		break;
		case 2:
		cout<<"The grade is Avarage"<<endl;
		break;
		default: 
		cout<<"You are fail, sala porbina to number pabi kivabe"<<endl;
	  }
   }
   else
   cout<<"You entered wroung choice"<<endl;
}
