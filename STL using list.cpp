#include<iostream>
#include<list>
#include<cstdlib> //FOR USING RANDOM FUNCTION
using namespace std;
void display(list<int> &l1)
{
    list<int>::iterator p;
    for(p=l1.begin();p!=l1.end();p++)
    {
        cout<<*p<<" ";
    }
    cout<<"\n\n";
}
main()
{
    list<int>list1;
    list<int>list2(5);
    for(int i=0;i<3;i++)
    {
        list1.push_back(rand()/100);
    }
    list<int>::iterator it;
    for(it=list2.begin();it!=list2.end();it++)
    {
        *it=rand()/100;
    }
    cout<<"List 1 elements are :"<<endl;
    display(list1);
    cout<<"List 2 elements are :"<<endl;
    display(list2);
    //ADD TWO ELEMENTS IN LIST1
    list1.push_front(100);
    list1.push_back(200);
    cout<<"Now list1 is :"<<endl;
    display(list1);
    list2.pop_front(); //REMOVE ELEMENTS FROM FRONT POSITION
    list2.pop_back();
    cout<<"Now the list 2 elements are :"<<endl;
    display(list2);
    list1.merge(list2);//MERGING TWO LIST(UNSORTED);
    cout<<"Merged unsorted lists are :"<<endl;
    display(list1);
    list<int>listA,listB;
    listA=list1;
    listB=list2;
    listA.sort();
    listB.sort();
    listA.merge(listB);
    cout<<"Merged sorted lists are :"<<endl;
    display(listA);
    listA.reverse();
    cout<<"Reverse merged lists are :"<<endl;
    display(listA);
    cout<<" : END PROGRAM : "<< endl;
    return 0;
}
