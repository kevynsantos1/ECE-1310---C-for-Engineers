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
  
  int n;
  cout<<"Please pick a number between 10 and 20"<<endl;
  cin>>n;
  counter=n;
 
  while ((counter>=n)&&(counter<=3*n)){
      cout<<"Counter is: "<<counter<<endl;
      if ((counter%6)==0){
        cout<<"Your number is divisible"<<endl;
      }
      counter=counter + 3;
  }
  
  cout<<"Good Bye"<<endl;
  
  
  
  
  

    return 0;
}