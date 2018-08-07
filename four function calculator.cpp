#include<iostream>
using namespace std;
int main()
{
	cout<<"1.addition"<<endl;
	cout<<"2.substaraction"<<endl;
	cout<<"3.multiplication"<<endl;
	cout<<"4.division"<<endl;
	cout<<"Enter your choice"<<endl;
	int n;
	cin>>n;
	switch(n)
	{
		case 1:
			cout<<"Enter two numbers"<<endl;
			int a,b;
			cin>>a>>b;
			cout<<a+b;
			break;
			case 2:
				cout<<"Enter two numbers"<<endl;
				int x,y;
				cin>>x>>y;
				cout<<x-y;
				break;
				case 3:
					cout<<"Enter two numbers"<<endl;
					int m,n;
					cin>>m>>n;
					cout<<m*n;
					break;
					case 4:
						cout<<"Enter two numbers"<<endl;
						int p,q;
						float c;
						cin>>p>>q;
						c=(float)p/q;
						cout<<c;
						break;
						default:
							cout<<"You entered wroung key"<<endl;
	}
}
