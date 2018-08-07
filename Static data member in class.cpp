#include<iostream>
using namespace std;
class Account
{
	static float roi;
	float balance,interest;
	float a,t;
	public:
		void input();
		void output();
		static void set_roi();
};
void Account::input(void)
{
	cout<<"Enter the balance"<<endl;
	cin>>a;
	cout<<"Enter the time"<<endl;
	cin>>t;
}
void Account::set_roi(void)
{
	cout<<"Enter the rate of interest"<<endl;
	cin>>roi;
}
void Account::output(void)
{
	cout<<"The interest balance is="<<endl;
	interest=(float)(a*roi*t)/100;
	cout<<interest;
	balance=a+interest;
	cout<<endl<<"the main balance is="<<balance;
}
float Account::roi;
main()
{
	Account a1,a2;
	a1.input();
	Account::set_roi();
	a1.output();
}

