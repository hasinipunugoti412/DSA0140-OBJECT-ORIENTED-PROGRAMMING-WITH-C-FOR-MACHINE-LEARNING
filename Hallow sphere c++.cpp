#include<iostream>
using namespace std;
int main()
{
    int side, i, j;

    cout<<"Enter side of square";
    cin>>side;

    for(i = 0; i < side; i++){

        for(j = 0; j < side; j++){

            if(i==0 || i==side-1 || j==0 || j==side-1)
                cout<<"*";
            else 
                cout<<" ";
        }
		cout<<"\n";
    }
    return 0;
}
