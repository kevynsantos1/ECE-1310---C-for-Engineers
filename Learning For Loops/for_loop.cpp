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
    int z;
    
    cout<<"Please give a starting number"<<endl;
    cin>>x;
    cout<<"Please give an ending number"<<endl;
    cin>>y;
    
    
    for(int i=x;i<=y;i++){
        z=z+i;
    }
    cout<<z<<endl;

    return 0;
}