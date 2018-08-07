#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
main()
{
    vector<int> v;
    cout<<"Initial size :"<<v.size()<<endl;
    cout<<"Capacity is :"<<v.capacity()<<endl;
    int x;
    cout<<"Enter few elements :"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    cout<<"Size after adding 5 values :"<<endl;
    cout<<v.size()<<endl;
    cout<<"New Capacity is :"<<v.capacity()<<endl;
    cout<<"Current contents are :"<<endl;
    display(v);
    v.push_back(45);
    cout<<"Now size :"<<v.size()<<endl;
    cout<<"Contents are :"<<endl;
    cout<<"Capacity is :"<<v.capacity()<<endl;
    display(v);
    //Inserting elements
    vector<int>::iterator it=v.begin();
    v.insert(it+3,35);
    cout<<endl<<"contents after Inserting the values"<<endl;
    display(v);
    // Remove particular elements
    v.erase(v.begin()+3,v.begin()+5);
    cout<<"Contents After deletion :"<<endl;
    display(v);
    cout<<"END  PROGRAM"<<endl;
    return (0);
}
