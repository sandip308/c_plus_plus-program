#include<iostream>
#include<string>
using namespace std;
main()
{
    string s1("12345");
    string s2 ("hey bro");
    cout<<"Orginal strings are :"<<s1<<" "<<s2<<endl;
    //Inserting an elements
    cout<<"Place s2 inside s1="<<endl;
    s1.insert(4,s2);
    cout<<"Modified s1 :"<<s1<<endl;
    cout<<"Remove 7 character from 4th index :"<<endl;
    s1.erase(4,7);
    cout<<"Now s1 is :"<<s1<<endl;
    cout<<"Replace three middle character in s2 with s1"<<endl;
    s2.replace(1,4,s1);
    cout<<"Now s2 is :"<<s2<<endl;
    return 0;
}
