#include<iostream>
main()
{
	int n,x,rev=0;
	std::cout<<"Enter a number\n";
	std::cin>>n;
	while(n>0)
	{
		x=n%10;
		rev=rev*10+x;
		n=n/10;
	}
	std::cout<<"The reverse number is="<<rev;
}
