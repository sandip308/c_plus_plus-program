#include<iostream>
using namespace std;
main()
{
    cout.fill('<');
    cout.precision(3);
    for(int i=1;i<=6;i++)
    {
        cout.width(5);
        cout<<i;
        cout.width(10);
        cout<<1.0/float(i)<<endl;
        if(i==3)
        {
            cout.fill('>');
        }
    }
    cout<<"Padding changed"<<endl;
    cout.fill('#');
    cout.width(15);
    cout<<12.345678<<endl;
    return 0;
}
