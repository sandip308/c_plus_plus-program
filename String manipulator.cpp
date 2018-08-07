#include<iostream>
#include<string>
using namespace std;
main()
{
    string s1;
    string s2("INDIA");
    string s3(" IS MY COUNTRY");
    //ASSIGNING VALUE TO STRING OBJECT
    s1=s2;
    cout<<"s1="<<s1<<endl;
    s1="Ansi c++";
    cout<<"Now s1 is :"<<s1<<endl;
    string s4(s1);
    cout<<"S4="<<s4<<endl;
    cout<<"Enter a string"<<endl;
    getline(cin,s4);
    cout<<"Now s4 is=" <<s4<<endl;
    s1=s2+s3;
    cout<<"Now s1 is :"<<s1<<endl;
}
