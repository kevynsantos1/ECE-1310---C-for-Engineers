/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    
    //Problem 1
    int counter=0;
    int N;
    cout<<"Please pick a number"<<endl;
    cin>>N;
    
    while (counter<=N){
        if (counter%2==0)
            cout<<counter<<" *"<<endl;
        else
            cout<<counter<<" -"<<endl;
        counter++;
    }
    
    //Problem 2
    int balance=10000;
    int x;
    bool loop=0;
    cout<<"How much would you like to spend"<<endl;
    cin>>x;
    
    while ((balance>0)&&(x<1000)){
        balance=balance-x;
        cout<<"Current Balance: "<<balance<<endl;
        cout<<"How much would you like to spend?"<<endl;
        cin>>x;
    }
    
    //Problem 3
    string pw = "Password";
    string y;
    bool loopk = 0;
    int attempts=1;
    cout<<"Please provide password to enter"<<endl;
    cin>>y;
    
    while ((loopk !=1)&&(attempts<3)){
        if (y==pw){
            cout<<"Correct password, you may enter"<<endl;
            loopk = 1;
        }
        else{
            cout<<"Incorrect, try again"<<endl;
            attempts++;
            cin>>y;
        }
    }
    
    //Problem 4
    int p;
    int counterp;
    int result;
    int resulteven;
    int resultodd;
    cout<<"Please provide a number"<<endl;
    cin>>p;
    
    while(counterp<=p){{
        result=result+counterp;
        
    }
        
        if ((counterp%2)==0){
            resulteven=resulteven+counterp;
            
        }
        
        if ((counterp%2)!=0){
            resultodd=resultodd+counterp;
            
        }
        counterp++;
        }
    
    cout<<"The sum of the first "<<p<<" numbers is: "<<result<<endl;    
    cout<<"The sum of the first "<<p<<" even numbers is: "<<resulteven<<endl;       
    cout<<"The sum of the first "<<p<<" odd numbers is: "<<resultodd<<endl;       
    
    //Problem 5
    int k;
    int counterk;
    cout<<"Please provide an integer: "<<endl;
    cin>>k;
    
    while (counterk<=k-1){
        cout<<counterk<<", ";
        counterk++;
    }
    
    cout<<counterk;
    
    //Problem 6
    bool stop=false;
    
    
    while (!stop){
        
    char op;
    float x1;
    float x2;
    cout<<endl<<"Please provide two numbers"<<endl;
    cin>>x1;
    cin>>x2;
    float answer;
    cout<<"Please provide a math operator or press 'x' to quit"<<endl;
    cin>>op;
        
        switch(op){
            case 'x':
                stop=true;
                cout<<"You have quit the calculator"<<endl;
                break;
            case '+':
                answer=x1+x2;
                cout<<"The result of addition is: "<<answer<<endl;
                break;
            case '-':
                answer=x1-x2;
                cout<<"The result of subtraction is: "<<answer<<endl;
                break;
            case '*':
                answer=x1*x2;
                cout<<"The result of multiplication is: "<<answer<<endl;
                break;
            case '/':
                if (x2!=0){
                answer=x1/x2;
                cout<<"The result of division is: "<<answer<<endl;
                }
                else{
                cout<<"You cannot divide by 0"<<endl;
                }
                break;
            default:
                cout<<"You did not pick a valid operator"<<endl;
            
            
        }
    }
    
    
    
    return 0;
}


