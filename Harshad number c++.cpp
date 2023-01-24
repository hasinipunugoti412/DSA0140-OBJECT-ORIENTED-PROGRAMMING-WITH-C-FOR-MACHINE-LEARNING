#include<iostream>
using namespace std;
int main()
{
	int num,n1,sum=0,rem;
	cout<<"enter the number";
	cin>>num;
	n1=num;
	while(num!=0)
	{
		rem=num%10;
		sum=sum+rem;
		num/=10;
	}
	if(n1%sum==0)
	{
		cout<<"harshad number";
	}
	else
	{
		cout<<"not a harshad number";
	}
}
