/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
     
    int x1;
    int x2;
    int x3=(x1>x2);
    cout<<"Please provide two integers"<<endl;
    cin>>x1;
    cin>>x2;
    if (((x1+x2)%2)==0){
        cout<<"Your integers added together are even"<<endl;
    }
    else if (((x1+x2)%2)!=0){
        cout<<"Your integers added together are odd"<<endl;
    }
    
    if (((x1+x2)%3)==0){
        cout<<"Your integers added together are divisible by 3"<<endl;
    }
    else if (((x1+x2)%3)!=0){
        cout<<"Your integers added together are not divisible by 3"<<endl;
    }
    
    if ((x1%x2)==0){
        cout<<"Your first integer is divisible by your second integer"<<endl;
    }
    else if ((x1%x2)!=0){
        cout<<"Your first integer is not divisible by your second integer"<<endl;
    }
    switch (x3){
        case 0:
            cout<<"Your first integer is larger than your second integer"<<endl;
            break;
        case 1:
            cout<<"Your first integer is not larger than your second integer"<<endl;
    }
 
 
    int syst;
    int dist;
    cout<<"Please provide two integers. First one should be between 100-150. Second one should be between 70-99"<<endl;
    cin>>syst;
    cin>>dist;
    if ((syst>=140)||(dist>=90)){
        cout<<"Stage 2 high blood pressure"<<endl;
    }
    else if (syst<=119){
        cout<<"Normal blood pressure"<<endl;
    }
    else if ((syst>=120)&&(syst<=129)){
        cout<<"Elevated blood pressure"<<endl;
    }
    else if ((syst>=130)&&(syst<=139)){
        cout<<"Stage 1 high blood pressure"<<endl;
    }
    
    
    char k;
    int z;
    cout<<"Please pick i, h, or m"<<endl;
    cin>>k;
    cout<<"Now please pick an integer"<<endl;
    cin>>z;
    switch (k){
        case 'i':
            cout<<"The increment of your integer is: "<<(++z)<<endl;
            break;
        case 'h':
            cout<<"Your integer halfed is: "<<(z/2.0)<<endl;
            break;
        case 'm':
            cout<<"The remainder of your integer divided by 3 is: "<<(z%3)<<endl;
            break;
    }
    switch (z){
        case 32 ... 127:
            cout<<"Your integer is the character: "<<static_cast<char>(z)<<" in ASCII code"<<endl;
            break;
    }
    
    
    return 0;
}