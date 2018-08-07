#include<iostream>
using namespace std;
template<class x>
class vector
{
	private:
		x *v;
		public:
			vector()
			{
				v=new x[3];
				for(x i=0;i<3;i++)
				{
					v[i]=0;
				}
			}
			vector(x *a)
			{
				for(x i=0;i<3;i++)
				{
					v[i]=a[i];
				}
			}
			x operator*(vector &y)
			{
				x sum=0;
				for(x i=0;i<3;i++)
				{
					sum+=this->v[i]*y.v[i];
					return(sum);
				}
			}
};
main()
{
	int p[3]={1,2,3};
	int q[3]={4,5,6};
	vector<int> v1;
	vector<int>v2;
	v1=p;
	v2=q;
	int R=v1*v2;
	cout<<"R="<<R;
	return 0;
}
