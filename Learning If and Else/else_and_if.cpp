/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main ()
{

  int x;
  int y;
  int z;

  cout<<"Hello, what is your age?"<<endl;
  cin>>x;
  
  if(x<40){
  int y=(x-18);
        cout<<"Your age is less than 40 and you were 18 years old "<<y<<" years ago."<<endl;
  }
  
  else{
  int z=(x-40);
        cout<<"Your age is more than 40 and you were 40 years old "<<z<<" years ago."<<endl;
  }
  
  cout<<"Bye bye";
  
  
  
  
  
  
  return 0;
}
