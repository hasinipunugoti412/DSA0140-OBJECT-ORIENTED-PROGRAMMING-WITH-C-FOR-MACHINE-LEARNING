#include<iostream>
using namespace std;
int main()
{
	string a,b;
	cout<<"Enter the string= ";
	cin>>a;
	for(int i=a.size()-1;i>=0;i--)
	{
		b+=a[i];
	}
	if(a==b)
	cout<<"Palindrome";
	else 
	cout<<"Not a palindrome";
}
