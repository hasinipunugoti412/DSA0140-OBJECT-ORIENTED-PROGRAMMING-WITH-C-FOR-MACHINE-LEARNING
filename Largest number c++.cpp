#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"enter the no.of elements";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int largest=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(a[i]>largest)
		{
			largest=a[i];
		}
	}
	cout<<"largest element is"<<largest;
	
}
