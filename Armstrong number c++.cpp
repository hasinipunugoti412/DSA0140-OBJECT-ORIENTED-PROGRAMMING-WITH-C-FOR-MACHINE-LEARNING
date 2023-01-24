#include<iostream>
using namespace std;
int main()
{
	int i,n,n1,remainder,result=0;
	cout<<"enter the number= ";
	cin>>n;
	n1 = n;
    while (n1 != 0) 
	{
        remainder = n1 % 10;
        result += remainder * remainder * remainder;
        n1 /= 10;
    }
    if (result == n)
        cout << n << " is an Armstrong number.";
    else
        cout << n << " is not an Armstrong number.";
    return 0;
}
