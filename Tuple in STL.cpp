#include<iostream>
#include<tuple>
using namespace std;
main()
{
    tuple<string,int,int>t1;
    t1=make_tuple("Sandip",14,20);//inserting the value in tuple;
    cout<<get<0>(t1);  //HOW TO PRINT THE TUPLE VALUE;
    cout<<endl<<get<1>(t1);
    cout<<endl<<get<2>(t1);
}
