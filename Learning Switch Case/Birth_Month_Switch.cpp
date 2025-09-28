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
    cout<<"Please provide your birth months number"<<endl;
    cin>>x;
    
    switch(x){
        case 1:
            cout<<"Your birth month is January";
            break;
        case 2:
            cout<<"Your birth month is February";
            break;
        case 3:
            cout<<"Your birth month is March";
            break;
        case 4:
            cout<<"Your birth month is April";
            break;
        case 5:
            cout<<"Your birth month is May";
            break;
        case 6:
            cout<<"Your birth month is June";
            break;
        case 7:
            cout<<"Your birth month is July";
            break;
        case 8:
            cout<<"Your birth month is August";
            break;
        case 9:
            cout<<"Your birth month is September";
            break;
        case 10:
            cout<<"Your birth month is October";
            break;
        case 11:
            cout<<"Your birth month is November";
            break;
        case 12:
            cout<<"Your birth month is December";
            break;
        default:
            cout<<"you lyin";
            break;
    }
    
    
    return 0;
}
