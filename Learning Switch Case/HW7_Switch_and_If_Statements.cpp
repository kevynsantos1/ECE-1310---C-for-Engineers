/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    
     //Code 1
    
    char a;
    string b;
    string c;
    char d;
    cout<<"Please pick P or C"<<endl;
    cin>>a;
    switch(a){
        case 'P':
            cout<<"What two strings would you like to print?"<<endl;
            cin>>b>>c;
            cout<<"Your super-string is "<<b<<c<<endl;
            break;
        case 'C':
            cout<<"What character would you like to convert to an ASCII code integer?"<<endl;
            cin>>d;
            cout<<d<<" converted to ASCII code is "<<static_cast<int>(d)<<endl;
            break;
    }
    
    //Code 2
    
    string s1;
    string s2;
    string s3;
    cout<<"Please pick print or quit"<<endl;
    cin>>s1;
    if (s1=="print"){
        cout<<"Please pick help or word"<<endl;
        cin>>s2;
        if (s2=="help"){
            cout<<"I am your help"<<endl;
        }
        else if (s2=="word"){
            cout<<"Please pick a word"<<endl;
            cin>>s3;
            cout<<"Your word for today is: "<<s3<<endl;
        }
    }
        
    else if (s1=="quit"){
        cout<<"End of program"<<endl;
    }
    
    //Code 3
    
    char e;
    cout<<"Please pick one letter from the alphabet"<<endl;
    cin>>e;
    
    switch(e){
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            cout<<"Your letter is a vowel"<<endl;
            break;
        default:
            cout<<"Your letter is a consonant"<<endl;
    }
    
    //Code 4
    
    float p;
    char i;
    cout<<"Please pick a number with decimals"<<endl;
    cin>>p;
    cout<<"Please pick r, c, f, or i"<<endl;
    cin>>i;
    
    if (i=='r'){
        cout<<"The rounded version of your float is: "<<round(p)<<endl;
    }
    else if (i=='c'){
        cout<<"The ceil version of your float is: "<<ceil(p)<<endl;
    }
    else if (i=='f'){
        cout<<"The float version of your float is: "<<p<<endl;
    }
    else if (i=='i'){
        cout<<"The integer version of your floar is: "<<static_cast<int>(p)<<endl;
    }
    else
        cout<<"You did not provide one of the options"<<endl;
    
    //Code 5
    
    char t;
    float f1;
    float f2;
    cout<<"Pick which area you would like to calculate: t for triangle, c for circle, s for square, and r for rectangle"<<endl;
    cin>>t;
    switch(t){
        case 't':
            cout<<"Please provide the height of your triangle"<<endl;
            cin>>f1;
            cout<<"Please provide the base of your triangle"<<endl;
            cin>>f2;
            cout<<"The area of your triangle is: "<<((f1 * f2) / 2)<<endl;
            break;
        case 'c':
            cout<<"Please provide radius of your circle"<<endl;
            cin>>f1;
            cout<<"The radius of your circle is: "<<(M_PI*pow(f1,2))<<endl;
            break;
        case 's':
            cout<<"Please provide the side of your square"<<endl;
            cin>>f1;
            cout<<"The area of your square: "<<pow(f1,2)<<endl;
            break;
        case 'r':
            cout<<"Please provide the length of your rectangle"<<endl;
            cin>>f1;
            cout<<"Please provide the width of your rectangle"<<endl;
            cin>>f2;
            cout<<"The area of your rectangle is: "<<(f1 * f2)<<endl;
            break;
            
    }
    
    
    
    return 0;
}

