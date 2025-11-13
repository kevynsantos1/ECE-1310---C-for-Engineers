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
    
    do{
        cout<<"Pick a number from 0-100"<<endl;
        cin>>x;
    }
    while (!((x>=0)&&(x<=100)));
    
    
    
    

    return 0;
}