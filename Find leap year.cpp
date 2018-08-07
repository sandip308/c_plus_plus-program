#include<iostream>
using namespace std;
main()
{
	int n;
	cout<<"Enter a year"<<endl;
	cin>>n;
	(n%4==0)?cout<<"This year"<<" "<<n<<" "<<"is a leap year\n":cout<<"This year"<<" "<<n<<" "<<"is not a leap year\n";
}
