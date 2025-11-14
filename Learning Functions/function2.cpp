/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


bool DivisibleBy3(int n){
    if (n%3==0){
        return true;
    }
    else{
    return false;
}
}

int Biggest(int x, int y){
    if (x>y){
        return x;
    }
    else{
        return y;
    }
}

bool BiggestDivisibleBy3(int x, int y){
    int biggest=Biggest(x,y);
    return DivisibleBy3(biggest);
}


int main()
{
int x;
int y;
cout<<"Please provide first integer"<<endl;
cin>>x;
cout<<"Please provide second integer"<<endl;
cin>>y;

if(BiggestDivisibleBy3(x,y)){
    cout<<"Your bigger integer is divisible by 3"<<endl;
}
else{
    cout<<"The bigger integer is not divisible by 3"<<endl;
}

    return 0;
}


