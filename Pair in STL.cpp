#include<iostream>
using namespace std;
class student
{
    string name;
    int age;
public:
    void setStudent(string s, int a)
    {
        name=s;
        age=a;
    }
    void showstudent()
    {
        cout<<"\n NAME:"<<name;
        cout<<"\n AGE:"<<age;
    }
};
main()
{
    // HOW TO CREATE A PAIR OBJECT IN STL;
    pair<string,int>p1;
    pair<string,string>p2;
    pair<string,float>p3;
    pair<int, student>p4; //STUDENT IS A CLASS NAME;
    // HOW TO INSERT VALUE IN PAIR IN STL;
    p1=make_pair("Rahul",16);
    p2=make_pair("India","sultanpur");
    p3=make_pair("Ansi c++",345.6f);
    student s1; //MAKE A STUDENT CLASS OBJECT S1;
    s1.setStudent("Sandip",20); //CALL THE SETSTUDENT() FUNCTION WHICH IS PRESENT IN CLASS;
    p4=make_pair(1,s1); // INSERTING VALUE OF CLASS USING S1 OBJECT;
    // HOW TO PRINT THE INSERTING VALUE IN STL;
    cout<<"\n pair1:";
    cout<<endl<<p1.first<<" "<<p1.second;
    cout<<"\n pair2:";
    cout<<endl<<p2.first<<" "<<p2.second;
    cout<<"\n pair3:";
    cout<<endl<<p3.first<<" "<<p3.second;
    cout<<"\n pair4:";
    cout<<endl<<p4.first<<endl;
    student s2=p4.second; //HOW TO PRINT THE CLASS DATA USING PAIR IN STL;
    s2.showstudent();
}
