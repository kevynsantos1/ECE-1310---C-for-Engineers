#include <iostream>

using namespace std;

// Coin and cash array to check with
float coin_type_array[11] = {0.01,0.05,0.1,0.25,1.0,2.0,5.0,10.0,20.0,50.0,100.0};

// Total Balance array
int total_coins_array[11] = {0};

// List of Functions
void get_help();
void get_total_balance(float total_balance);
float get_coin(string d_or_w, float amount_withdrawn,float total_balance);
void coin_convertion();
float reset_balance(float total_balance);
float my_remainder(float x, float y);

int main(){
    // declaring needed variables
    float amount_change = 0;
    float total_balance = 0;
    string d = "deposit";
    string w = "withdraw";
    char command;
    bool running = true;

    // The main loop
    cout<<"Welcome to the money machine."<<endl;
    while (running)
    {
        cout<<endl<<"Please enter a command or type h for help"<<endl;
        cin>>command;
        switch (command)
        {
            case 'h':
                get_help();
                break;
            case 'd':
                total_balance = get_coin(d,amount_change,total_balance);
                break;
            case 'v':
                get_total_balance(total_balance);
                break;
            case 'w':
                total_balance = get_coin(w,amount_change,total_balance);
                break;
            case 'c':
                coin_convertion();
                break;
            case 'r': // only for testing purposes
                total_balance = reset_balance(total_balance);
                break;
            case 'q':
                running = false;
                break;
            default:
                cout<<"Unknown command"<<endl;
                break;
        }
    }
    get_total_balance(total_balance);
    cout<<"Thank you for using the money machine.";

    return 0;
}

// Is called when 'h' is typed
// prints all avaliable commands and what they does
void get_help()
{
    cout<<"type d to deposite an amount.\ntype v to view total balance.\ntype w to withdrawn an amount.\ntype c to convert coins.\ntype q to quit the program."<<endl;
}

// Is called when 'v' is typed
// prints the total_balance and the coins in the total coin array
void get_total_balance(float total_balance)
{
    cout<<"Your total balance is $"<<total_balance<<endl;
    for(int i=0; i<11; i++)
    {
        cout<<"$"<<coin_type_array[i]<<" : "<<total_coins_array[i]<<endl;
    }
}

// Is called when 'd' or 'w' is typed
// Used to change the balance and coins
float get_coin(string d_or_w, float amount_change,float total_balance)
{
    float coin_type;
    int number_of_coins;
    cout<<"Enter the type of coin or cash you wish to "<<d_or_w<<" : $";
    cin>>coin_type;
    cout<<"Enter the number of selected coin or cash you wish to "<<d_or_w<<" : ";
    cin>>number_of_coins;
    amount_change = coin_type*number_of_coins;
    for(int i=0; i<11; i++)
    {
        if(d_or_w == "deposit")
        {
                if((coin_type==coin_type_array[i])&&(amount_change>0))
            {
                total_coins_array[i] += number_of_coins;
                total_balance += amount_change;
            }
        }
        else if(d_or_w == "withdraw")
        {
                if((coin_type==coin_type_array[i])&&(amount_change<=coin_type)&&(amount_change<total_balance))
            {
                total_coins_array[i] -= number_of_coins;
                total_balance -= amount_change;
            }
        }
    }
    return total_balance;
}

void coin_convertion()
{
    float from;
    float to;
    cout<<"What type of coin do you wish to convert from? : $";
    cin>>from;
    cout<<"What coin do you want instead? : $";
    cin>>to;

    for(int i=0; i<11; i++)
    {
        if(from==coin_type_array[i]) // check if the value typed exists
        {
            from = i; // and converts it the index of that value
            i = 11;
        }
    }
    for(int i=0; i<11; i++)
    {
        if(to==coin_type_array[i])
        {
            to = i;
            i = 11;
        }
    }
    // The main part where the conversion happens
    total_coins_array[static_cast<int>(to)] = (total_coins_array[static_cast<int>(from)]*coin_type_array[static_cast<int>(from)])/coin_type_array[static_cast<int>(to)];
    total_coins_array[static_cast<int>(from)] = my_remainder(total_coins_array[static_cast<int>(from)]*coin_type_array[static_cast<int>(from)],coin_type_array[static_cast<int>(to)])/coin_type_array[static_cast<int>(from)];
}

// Is called when 'd' or 'w' is typed (only for testing)
// Recalculates the total balance from the values in the total_coins_array
float reset_balance(float total_balance)
{
    for(int i=0; i<11; i++)
    {
        total_balance = total_coins_array[i]*coin_type_array[i];
    }
    return total_balance;
}

// Finds the remainder of two numbers
// cmath's remainder function does not work as intended and is not reliable
float my_remainder(float y, float x)
{
    int multiply = y/x;
    float my_remainder = 0;
    my_remainder = y-(multiply*x);
    return my_remainder;
}
