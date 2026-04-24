
#include "Bank_Account.h"

int main()
{
    int choice;
    int n = 0;

    Account *accounts = new Account[100];

    do
    {
        cout<<"\n----- BANK MANAGEMENT SYSTEM -----\n";
        cout<<"1. Create Account\n";
        cout<<"2. Deposit Money\n";
        cout<<"3. Transfer Money\n";
        cout<<"4. Display Accounts\n";
        cout<<"5. Total Accounts\n";
        cout<<"6. Exit\n";
        cout<<"Enter choice: ";
        if(!(cin>>choice))
        {
            cin.clear();
            cin.ignore(10000,'\n');
            cout<<"Invalid input. Please enter a number between 1 and 6.\n";
            continue;
        }

        switch(choice)
        {
        case 1:
        {
            int accNo;
            string name;
            double bal;

            cout<<"Enter Account Number: ";
            cin>>accNo;

            cout<<"Enter Holder Name: ";
            cin>>name;

            cout<<"Enter Initial Balance: ";
            cin>>bal;

            accounts[n].createAccount(accNo,name,bal);
            n++;

            cout<<"Account Created Successfully\n";
            break;
        }

        case 2:
        {
            int accNo;
            double amount;

            cout<<"Enter Account Number: ";
            cin>>accNo;

            cout<<"Enter Deposit Amount: ";
            cin>>amount;

            for(int i=0;i<n;i++)
            {
                if(accounts[i].getAccountNumber()==accNo)
                {
                    accounts[i].deposit(amount);
                    cout<<"Money Deposited\n";
                }
            }
            break;
        }

        case 3:
        {
            int fromAcc,toAcc;
            double amount;

            cout<<"Enter Sender Account Number: ";
            cin>>fromAcc;

            cout<<"Enter Receiver Account Number: ";
            cin>>toAcc;

            cout<<"Enter Amount: ";
            cin>>amount;

            Account *sender=NULL;
            Account *receiver=NULL;

            for(int i=0;i<n;i++)
            {
                if(accounts[i].getAccountNumber()==fromAcc)
                    sender=&accounts[i];

                if(accounts[i].getAccountNumber()==toAcc)
                    receiver=&accounts[i];
            }

            if(sender!=NULL && receiver!=NULL)
            {
                if(sender->transfer(*receiver,amount))
                    cout<<"Transfer Successful\n";
                else
                    cout<<"Transfer Failed\n";
            }
            else
            {
                cout<<"Invalid Account Number\n";
            }

            break;
        }

        case 4:
        {
            for(int i=0;i<n;i++)
            {
                accounts[i].displayAccount();
            }
            break;
        }

        case 5:
        {
            cout<<"Total Accounts Created : "<<Account::getTotalAccounts()<<endl;
            break;
        }

        case 6:
            cout<<"Exiting Program\n";
            break;

        default:
            cout<<"Invalid Choice\n";
        }

    } while(choice!=6);

    delete[] accounts;

    return 0;
}
