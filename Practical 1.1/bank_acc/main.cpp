#include <iostream>
#include "../bank_acc.h"

using namespace std;

int main()
{
    bank_acc B[50];
    int ch,last=0,i;
    long int ano;

    while(true)
    {
        cout<<"\n1:Create acc 2:Withdraw 3:Deposite 4:Check Balance 5:Exit -->";
        cin>>ch;

        switch(ch)
        {
        case 1:
            B[last].create_acc();
            last++;
            break;

        case 2:
            cout<<"Enter account number -->";
            cin>>ano;

            for(i=0;i<last;i++)
            {
                if(B[i].withdraw(ano)==1)
                {
                    break;
                }
            }

            if(i==last)
            {
                cout<<"ERROR : Account does not exist"<<endl;
            }
            break;

        case 3:
            cout<<"Enter account number -->";
            cin>>ano;

            for(i=0;i<last;i++)
            {
                if(B[i].deposite(ano)==1)
                {
                    break;
                }
            }

            if(i==last)
            {
                cout<<"ERROR : Account does not exist"<<endl;
            }
            break;

        case 4:
            cout<<"Enter account number -->";
            cin>>ano;

            for(i=0;i<last;i++)
            {
                if(B[i].check_balance(ano)==1)
                {
                    break;
                }
            }

            if(i==last)
            {
                cout<<"ERROR : Account does not exist"<<endl;
            }
            break;

        case 5:
            return 0;

        default:
            cout<<"Error : Enter number again"<<endl;
        }
    }

    return 0;
}
