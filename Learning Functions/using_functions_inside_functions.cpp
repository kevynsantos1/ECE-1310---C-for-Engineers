/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void SayHello(string x);

char GradeMe(int y);

void TellMyGrade(string x,int y);


int main()
{

string x;
int y;

cout<<"Please provide your name"<<endl;
cin>>x;
cout<<"Please provide an integer"<<endl;
cin>>y;


GradeMe(y);

TellMyGrade(x, y);

    return 0;
}

void SayHello(string x){
    cout<<"Hello "<<x;
}

char GradeMe(int y){
    if ((y>=90)&&(y<=100))
        return 'A';
    else if ((y<=89)&&(y>=80))
        return 'B';
    else if ((y<=79)&&(y>=70))
        return 'C';
    else if ((y<=69)&&(y>=60))
        return 'D';
    else if ((y<=59)&&(y>=0))
        return 'F';
    else
        return '?';
}

void TellMyGrade(string x, int y){
    SayHello(x);
    cout<<", your grade is: "<<GradeMe(y);
}

