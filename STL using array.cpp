#include<iostream>
#include<array>
using namespace std;
main()
{
	array <int,5>data_array={11,22,33,44,55};
	cout<<data_array.at(2)<<endl;     //calling at()function;
	cout<<data_array[4]<<endl;       //calling array operator[];
	cout<<data_array.front()<<endl;  //calling front function;
	cout<<data_array.back()<<endl;  //calling back function;
    data_array.fill(10);
    for(int i=0;i<5;i++)
    {
        cout<<data_array[i]<<endl;
    }
    array<int,5>data_array1={10,20,30,40,50};
    array<int,5>data_array2={1,2,3,4,5};
    data_array1.swap(data_array2);  //calling swap()function
    cout<<"After swaping the data..."<<endl;
    for(int j=0;j<5;j++)
    {
        cout<<data_array1[j]<<endl;
    }
     for(int j=0;j<5;j++)
    {
        cout<<data_array2[j]<<endl;
    }
    cout<<"size of data_array="<<data_array.size(); //calling size() function using array object;
}
