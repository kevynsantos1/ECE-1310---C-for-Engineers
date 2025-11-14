/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{

double list[5];

double sum;
double a;
double b;
double c;
double d;
double e;

cout<<"Please input 5 decimal numbers"<<endl;

cin>>a;
cin>>b;
cin>>c;
cin>>d;
cin>>e;

list[0]=a;
list[1]=b;
list[2]=c;
list[3]=d;
list[4]=e;


for(int i=0;i<5;i++){
 sum=sum+list[i];
}
cout<<"Your sum is: "<<sum<<endl;
cout<<"Your average is: "<<sum/5<<endl;
    return 0;
}
