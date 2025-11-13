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
    int sum;
    int sumodd;
    int sum3;
    
    for(counter;counter<10;counter++){
        int x;
        cout<<"Please pick a number"<<endl;
        cin>>x;
        sum=sum+x;
        
        if (x%2!=0){
            sumodd=sumodd+x;
        }
        
        if (x%3==0){
            sum3=sum3+x;
        }
        
    }
    
    cout<<"The sum of all numbers given is: "<<sum<<endl;
    cout<<"The sum of all odd numbers given is: "<<sumodd<<endl;
    cout<<"The sum of all numbers divisible by 3 given is: "<<sum3<<endl;
    

    return 0;
}