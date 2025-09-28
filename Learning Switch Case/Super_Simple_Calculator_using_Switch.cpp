/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    
    float x;
    float y;
    char z;
    cout<<"Please provide two numbers"<<endl;
    cin>>x;
    cin>>y;
    cout<<"Please provide a mathematical operator"<<endl;
    cin>>z;
    
    switch(z){
        case '+':
            cout<<(x + y);
            break;
            
        case '-':
            cout<<(x - y);
            break;
            
        case '*':
            cout<<(x * y);
            break;
            
        case '/':
            if (y==0)
                cout<<"undefined, cannot divide by 0";
            else 
                cout<<(x / y);
            break;
            
        default:
            cout<<"You did not provide a mathematical operator";
    }
    
   
    
    
    
    return 0;
}
