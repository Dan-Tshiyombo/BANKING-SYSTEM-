#include <iostream>
//ALL VARIABLES
using namespace std;
double depositAmount;
double withdrawAmount;
double SendAmount;
double balance = 800;
int options;
int ACCNo;
int password;
string username;
string Reference;

// ===== FUNCTION: DEPOSIT =====
void userDetials()
{
    cout<<"ENTER YOU NAME "<<endl;
    cin>>username;
    cout<<"ENTER YOUR PASSWORD "<<endl;
    cin>>password;
    cout<<"You balance is "<<balance<<endl;
}
void Deposit()
{
    cout<<"How much do you want to Deposit ?"<<endl;
    cin>>depositAmount;
        balance=balance+depositAmount;
    cout<<"************************************************"<<endl;
    cout<<"You have deposited "<<depositAmount<<endl;
    cout<<"You new balance is "<<balance<<endl;

// Check if user has deposited the right/Check if amount is valid
 if(depositAmount<=0)
    {
        cout<<"Invalid /ENTER AMOUNT GREATER 0"<<endl;
    }
 else
    {
     cout<<"Successful Transaction"<<endl;
    }
}

// ===== FUNCTION: WITHDRAW =====
void Withdraw()
{
    cout<<"Enter the Amount you would like to Withdraw ? "<<endl;
    cin>>withdrawAmount;
// Check if user has enough money to withdraw/Check if amount is valid
    if(balance<withdrawAmount)
        {
            cout<<"Insufficient funds "<<endl;
        }
    else
        {

            balance =balance - withdrawAmount;
            cout<<"Withdraw Was Successful "<<endl;
            cout<<"Your new balance Amount is R"<<balance<<endl;
        }

    balance=balance-withdrawAmount;
}

// ===== FUNCTION: SENDCASH =====
void SendCash()
{
    cout<<"Enter the Recipient is Account Number? "<<endl;
    cin>>ACCNo;
    cout<<"Enter the Reference/Name "<<endl;
    cin>>Reference;
    cout<<"How much do you want to Send "<<endl;
    cin>>SendAmount;

// Check if user has enough money to send/Check if amount is valid

    if(SendAmount>balance)
        {
            cout<<"Insufficient funds. Cannot send"<<endl;
        }
    else
        {
            balance=balance -SendAmount;
            cout<<"************************************************"<<endl;
            cout<<username <<" have sent R: "<< SendAmount << " To the following Recipient "<<Reference<<endl;
            cout<<"Successful Transaction"<<endl;
        }
}


// ===== FUNCTION: CHECK BALANCE =====
void CheckBalance()
{
    cout<<"************************************************"<<endl;
    cout<<"You Current Balance "<<endl;
    cout<<"Balance R: "<<balance<<endl;
}
// ===== FUNCTION: MAIN MENU(USES SWITCHCASES) =====
void Menu()
{
    cout<<"##############CITY BANK#############"<<endl;
    cout<<""<<endl;

    cout<<"SELECT BETWEEN OPTIONS 1-5 !!"<<endl;
    cout<<"************************************************"<<endl;
    cout<<""<<endl;
    cout<<"Enter 1 for Deposit"<<endl;
    cout<<"Enter 2 for Withdrawal"<<endl;
    cout<<"Enter 3 for Send Cash"<<endl;
    cout<<"Enter 4 for Check Balance"<<endl;
    cout<<"Enter 5 for EXIT"<<endl;
    cin>>options;

// SWITCH: Choose what to do based on user choice
    switch (options)
    {
        case 1:
            Deposit();
            break;
        case 2:
            Withdraw();
            break;
        case 3:
            SendCash();
            break;
        case 4:
            CheckBalance();
            break;
        case 5:
            exit(0);
            break;
        default:
            cout<<"Invalid option /Choose between options 1 - 5"<<endl;
            break;
    }
}



int main()
{
    userDetials();
    do{ Menu();
        }
    while (options !=5);

    return 0;
}
