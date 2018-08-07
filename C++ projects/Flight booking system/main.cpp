#include <iostream>
using namespace std;
class Flight
{
public:
    void Data_entry(char *path[],float fare[]);
    void display(char *path[], float fare[],float total_fare[]);
    void bill_payment(char name[],int age,char sex[],char date[],char *path[],int number,float total_fare[]);
};
void Flight::Data_entry(char *path[],float fare[])
{
    for(int i=0;i<5;i++)
    {
        cout<<"Enter the route :"<<endl;
        cout<<"Route"<<"["<<i+1<<"] :";
        path[i]=new char[100];
        cin.getline(path[i],100);
        fflush(stdin);
        cout<<"Enter the fare of Route"<<endl;
        cin>>fare[i];
        fflush(stdin);
    }
}
void Flight::display(char *path[],float fare[],float total_fare[])
{
    cout<<endl<<endl;
    cout<<"Available flights routs are :"<<endl;
    for(int i=0;i<5;i++)
    {
        total_fare[i]=fare[i]+(0.18)*(fare[i]);
        cout<<"Route"<<"["<<i+1<<"]"<<path[i]<<endl;
        cout<<"Fare is="<<"RS "<<fare[i]<<endl;
        cout<<"Total fare is(including GST)="<<"RS "<<total_fare[i]<<endl;
    }
}
void Flight::bill_payment(char name[],int age,char sex[],char date[],char *path[],int number,float total_fare[])
{
    cout<<endl<<endl;
    cout<<"..........FLIGHT BILL.........."<<endl;
    cout<<endl<<endl;
    cout<<"Name..."<<name<<endl;
    cout<<"Age..."<<age<<endl;
    cout<<"Sex..."<<sex<<endl;
    cout<<"Journey date is="<<date<<endl;
    cout<<"Route is :"<<path[number]<<endl;
    cout<<"Fare is(including GST):"<<"RS "<<total_fare[number]<<endl;
}
int main()
{
   char *path[50];
   char name[100],sex[10],date[10];
   int age,number;
   float fare[10],total_fare[10];
   Flight f1;
   cout<<"........ WELCOME TO OUR FLIGHT BOOKING SYSTEM.........."<<endl;
   cout<<endl<<endl;
   f1.Data_entry(path,fare);
   cout<<"Enter your name"<<endl;
   cin.getline(name,100);
   fflush(stdin);
   cout<<"Enter your age"<<endl;
   cin>>age;
   fflush(stdin);
   cout<<"Enter your sex"<<endl;
   cin>>sex;
   fflush(stdin);
   cout<<"Enter the date of the journey"<<endl;
   cin>>date;
   fflush(stdin);
   f1.display(path,fare,total_fare);
   cout<<"Enter the number for booking ticket(1 to 5)"<<endl;
   cin>>number;
   fflush(stdin);
   if(number>=1||number<=5)
   {
       cout<<endl<<endl;
       cout<<"Your ticket has been booked successfully"<<endl;
       f1.bill_payment(name, age, sex, date, path,number, total_fare);
       cout<<"Thank you "<< name <<" for using our service"<<endl;
       cout<<"Wish you happy and safe journey"<<endl;
       cout<<"Visit again"<<endl;
   }
   else
   {
       cout<<"Please enter a valid number"<<endl;
   }

    return 0;
}
