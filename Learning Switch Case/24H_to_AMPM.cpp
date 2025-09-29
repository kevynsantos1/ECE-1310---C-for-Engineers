/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    
    int x;
    int y;
    cout<<"Please input an hour in 24 hour format"<<endl;
    cin>>x;
    cout<<"Please input the minute"<<endl;
    cin>>y;
    switch (x){
        case 0:
            cout<<"Your time is "<<(x+12)<<":"<<y<<"AM"<<endl;
            break;
        case 1 ... 11:
            cout<<"Your time is "<<x<<":"<<y<<"AM"<<endl;
            break;
        case 12:
            cout<<"Your time is "<<x<<":"<<y<<"PM"<<endl;
            break;
        case 13 ... 23:
            cout<<"Your time is "<<(x-12)<<":"<<y<<"PM"<<endl;
            break;
        default:
            cout<<"Unknown time"<<endl;
    }
    
            
        
            
    
    

    return 0;
}