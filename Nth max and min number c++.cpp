#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,a[10],n,min,max;
	cout<<"enter the no of numbers=";
	cin>>n;
	for(i=0;i<n;i++)
	{
	cout<<"enter the numbers"<<i+1<<"=";
	cin>>a[i];
    }
    sort(a,a+i);
    cout<<"sorted array is=";
    for(i=0;i<n;i++)
    {
    	cout<<a[i]<<",";
	}
	cout<<"\nenter the nth minium number:";
	cin>>min;
	cout<<"\nenter the mth maximum number:";
	cin>>max;
	cout<<"\nthe "<<min<<"th minium number is:"<<(a[min-1]);
	cout<<"\nthe "<<max<<"th maximum number is:"<<a[n-max];
	cout<<"\nthe sum of min and max numbers is:"<<a[min-1] + a[n-max];
	cout<<"\nthe difference of min and max numbers is:"<<a[n-max]-a[min-1];	
}
