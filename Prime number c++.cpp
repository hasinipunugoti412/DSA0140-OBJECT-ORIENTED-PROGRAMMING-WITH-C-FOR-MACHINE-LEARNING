#include<iostream>
using namespace std;
int main()
{
	int i,num,count=0;
	cout<<"enter the number";
	cin>>num;
	for(i=2;i<=num;i++)
	{
		if(num%i==0)
		{
			count++;
		}
    }
	if(count==2)
		cout<<"num is a prime";
	else
		cout<<"num is not a prime";
	return 0;	
}
