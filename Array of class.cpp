#include<iostream>
using namespace std;
int n;
class employee
{
	char name[50],age[20];
	int i;
	int emp_id;
	public:
		void get_data();
		void empid();
};
void employee::get_data()
{
	cout<<"Enter the number of the employee"<<endl;
	cin>>n;
	fflush(stdin);
	for(i=1;i<=n;i++)
	{
    	cout<<"Enter the employee name"<<endl;
	    cin>>name;
	    fflush(stdin);
	   cout<<"Enter the age of the employee"<<endl;
	   cin>>age;
	   fflush(stdin);
	   cout<<"Enter the employee id"<<endl;
	    cin>>emp_id;
	    fflush(stdin);
     }
}
void employee::empid()
{
	int a=1,number;
	cout<<"Enter 1 to search employee data"<<endl;
	cin>>a;
	fflush(stdin);
	if(a==1)
	{
		cout<<"Enter the employee id to search the employee information"<<endl;
		cin>>number;
		fflush(stdin);
		 if(number==emp_id)
		{
	        cout<<"The name of the employee is=";
	         cout<<name<<endl;
	         cout<<"The age of the employee is="<<endl;
	         cout<<age<<endl;
		}
		else
		{
			cout<<"Please enter the right employee id"<<endl;
		}
	}
}
main()
{
	employee e1,e2;
	e1.get_data();
	e1.empid();
}
