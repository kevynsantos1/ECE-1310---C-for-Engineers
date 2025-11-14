/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void print_hello(string x);


int main()
{
   
    string x;
    cout<<"Please give me your name"<<endl;   
    cin>>x;
    
    for (int i=0;i<10;i++){
        print_hello(x);
        cout<<" "<<x;
    }
   
    return 0;
}

void print_hello(string x){
    cout<<endl<<"Hello";
}

