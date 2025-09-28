/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    
    
    cout<<"Please pick a number between 0 and 100 ";
    int x;
    cin>>x;
    
    if((x>=90)&&(x<=100))
            cout<<"A";
    else if((x>=80)&&(x<90))
            cout<<"B";
    else if((x>=70)&&(x<80))
            cout<<"C";
    else if((x>=60)&&(x<70))
            cout<<"D";
    else if(x<60)
            cout<<"F";
    else
            cout<<"Please enter a valid number";
    
    
    
    
    

    return 0;
}
