/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

float division_reminder(int x,int y);

bool IsDivisibleBy(int x, int y);

int main()
{

int a;
int b;
cout<<"Please pick two numbers"<<endl;
cin>>a;
cin>>b;
cout<<"The remainder of your two numbers are: "<<division_reminder(a,b)<<endl;
cout<<"Your first number is divisible by your second number if output is 1: "<<IsDivisibleBy(a,b);
    return 0;
}

float division_reminder(int x,int y){
    return x%y;
}

bool IsDivisibleBy(int x, int y){
    return x%y==0;
}

