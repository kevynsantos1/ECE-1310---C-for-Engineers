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
    
    string x;
    string s="deeznuts";
    cout<<"Please input the password"<<endl;
    cin>>x;
    bool loop=0;
    
    while (loop != 1){
        if (x==s){
            cout<<"Correct password, you may enter"<<endl;
            loop=1;
        }
        else
            cout<<"Incorrect password"<<endl;
            cin>>x;
    }

    return 0;
}