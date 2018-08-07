#include<iostream>
using namespace std;
main()
{
	float salary,Bonus1=0,Bonus2=0;
	char gender;
	int flag=0,m=2;
	while(1)
	{
	  cout<<"Enter the gender(Male for M/m, Female for F/f)"<<endl;
	  cin>>gender;
	  cout<<"Enter the company actual salary"<<endl;
	  cin>>salary;
	  if(gender=='M'||gender=='m')
	{
		if(salary<=10000)
		{
			Bonus2=salary*0.07;
			Bonus2=Bonus2+salary;
			cout<<"The net salary in this month for this employee is="<<Bonus2<<endl;
			
		}
		else
		{
			Bonus1=salary*0.05;
		   Bonus1=Bonus1+salary;
		   cout<<"The net salary in this month for this employee is="<<Bonus1<<endl;
		}
       }
       if(gender=='F'||gender=='f')
	   {
		
		if(salary<=10000)
		{
			Bonus2=salary*0.12;
			Bonus2=Bonus2+salary;
			cout<<"The net salary in this month for this employee is="<<Bonus2<<endl;
		}
		else
		{
			Bonus1=salary*0.1;
		   Bonus1=Bonus1+salary;
		   cout<<"The net salary in this month for this employee is="<<Bonus1<<endl;
		}
		
	   }
    }
}
