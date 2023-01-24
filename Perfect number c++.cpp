#include<iostream>
using namespace std;
int main()
{
	int i ,num,sum=0,div;
	cout<<"enter the number";
	cin>>num;
	for(i=1;i<num;i++)
	{
		div=num%i;
		if(div==0)
		    sum=sum+i;
	}
	if(sum==num)
	    cout<<"perfect number";
	else
		cout<<"not a perfect number";
	return 0;
}
