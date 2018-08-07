#include<iostream>
using namespace std;
struct distance
{
	int inch,feet;
};
int main()
{
	struct distance d1,d2,d3;
	cout<<"Enter the first distace in feet"<<endl;
	cin>>d1.feet;
	cout<<"Enter the first distance in inch"<<endl;
	cin>>d1.inch;
	cout<<"The first distance is"<<" "<<d1.feet<<"feet"<<" "<<d1.inch<<"inch"<<endl;
	cout<<"Enter the 2nd distance in feet"<<endl;
	cin>>d2.feet;
	cout<<"Enter the 2nd distance in inch"<<endl;
	cin>>d2.inch;
	cout<<"The 2nd distance is"<<" "<<d2.feet<<"feet"<<" "<<d2.inch<<"inch"<<endl;
	d3.feet=d1.feet+d2.feet;
	d3.inch=d1.inch+d2.inch;
	if(d3.inch>=12)
	{
		d3.feet=d3.feet+1;
		d3.inch=d3.inch-12;
	}
	cout<<"The total distance is="<<" "<<d3.feet<<"feet"<<d3.inch<<"inch"<<endl;
	return 0;
}

