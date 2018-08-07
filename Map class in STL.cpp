#include<iostream>
#include<map>
#include<list>
#include<string>
using namespace std;

main()
{
    map<string,int>phonemap;
   string name;
   int number;
   cout<<"Enter the three sets of the value"<<endl;
   for(int i=0;i<3;i++)
   {
       cin>>name;
       cin>>number;
       phonemap[name]=number;
   }
   phonemap["sandip"]=4444;
   phonemap.insert(pair<string,int>("BOSE",5555));
   cout<<endl;
   cout<<"The size of the map is :"<<phonemap.size()<<endl;;
   cout<<"The list of the telephone numbers are :"<<endl;
   map<string,int>::iterator p= phonemap.begin();
   while(p!=phonemap.end())
   {
       cout<<(*p).first<<" "<<(*p).second<<endl;
       p++;
   }
   cout<<endl;
   cout<<"Enter name"<<endl;
   cin>>name;
   number=phonemap[name];
   cout<<"Number is :"<<number<<endl;
   return 0;
}
