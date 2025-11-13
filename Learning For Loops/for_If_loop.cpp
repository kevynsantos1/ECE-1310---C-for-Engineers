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
    
    int counter;
    int result;
    
    for(counter=0;counter<=50;counter++){
        if (counter%3==0){
            result++;
        }
    }
    cout<<"There are "<<result<<" numbers in the range of 0-50 divisible by 3"<<endl;;
    
    

    return 0;
}