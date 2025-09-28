/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int
main ()
{

  char x;

  cout << "Pick a single character please" << endl;
  cin >> x;
  if (x == 'A')
    cout << "Your grade is: A" << endl;

  cout << "Good bye" << endl;

  int y;

  cout << "Pick an integer please" << endl;
  cin >> y;
  if ((y > 0) && (y < 10))
    cout << "The number " << y << " is between 0 and 10" << endl;

  cout<<"Good bye";
  
  
  return 0;
}
