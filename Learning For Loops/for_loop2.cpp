/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    
    int x;
    int counter;
    cout<<"Please provide a number"<<endl;
    cin>>x;
    
    for (counter=0;counter<=10;counter++){
        cout<<x<< " X "<<counter<<" = "<<x*counter<<endl;
    }
    

    return 0;
}
