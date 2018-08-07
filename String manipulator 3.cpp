#include<iostream>
#include<string>
using namespace std;
main()
{
    string s("ONE TWO THREE FOUR FIVE");
    cout<<"String contents are..."<<endl;
    for(int i=0;i<s.length();i++)
    {
        cout<<s.at(i);
    }
    int x= s.find("Two");
    cout<<endl;
    cout<<"Two is found at :"<<x<<endl;
    int x1=s.find_first_of('T');
    cout<<"T found first at"<<x1<<endl;
    int x2=s.find_last_of('R');
    cout<<"R is the last found at :"<<x2<<endl;
    return 0;
}
