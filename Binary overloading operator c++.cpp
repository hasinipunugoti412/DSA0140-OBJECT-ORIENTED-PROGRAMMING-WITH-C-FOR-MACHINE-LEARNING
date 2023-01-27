#include <iostream>  
using namespace std;  
class Arith_num  
{  
    int x, y;  
    public:  
        void input()  
        {  
            cout << " Enter the first number: ";  
            cin >> x;  
        }         
        void input2()  
        {  
            cout << " Enter the second number: ";  
            cin >> y;  
        }     
        Arith_num operator + (Arith_num &ob)  
        {    
            Arith_num A;
            A.x = x + ob.y;  
            return (A);  
        }         
        void print()  
        {  
            cout << "The sum of two numbers is: " <<x;  
        }         
};  
int main ()  
{  
   Arith_num x1, y1, res;
    x1.input();  
    y1.input2();   
    res = x1 + y1;    
    res.print();      
    return 0;     
}
