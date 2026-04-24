#include "InsufficientBalanceException.h"

int main() {
    BankAccount acc(1000);
    int choice;
    double amount;

    addLog("Entered main()");

    do {
        try {
            cout << "\n===== BANK MENU =====\n";
            cout << "1. Deposit\n";
            cout << "2. Withdraw\n";
            cout << "3. Check Balance\n";
            cout << "4. Exit\n";
            cout << "Enter choice: ";
            cin >> choice;

            if (cin.fail()) {
                throw "Invalid input!";
            }

            switch (choice) {
                case 1:
                    cout << "Enter amount to deposit: ";
                    cin >> amount;
                    performTransaction(acc, amount, true);
                    cout << "Deposit Successful!\n";
                    break;

                case 2:
                    cout << "Enter amount to withdraw: ";
                    cin >> amount;
                    performTransaction(acc, amount, false);
                    cout << "Withdrawal Successful!\n";
                    break;

                case 3:
                    cout << "Current Balance: " << acc.getBalance() << endl;
                    break;

                case 4:
                    cout << "Exiting program...\n";
                    break;

                default:
                    cout << "Invalid choice!\n";
            }
        }

        catch (InsufficientBalanceException e) {
            cout << e.what() << endl;
        }

        catch (InvalidAmountException e) {
            cout << e.what() << endl;
        }

        catch (const char* msg) {
            cout << msg << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }

    } while (choice != 4);

    addLog("Exiting main()");

    // Show Logs
    cout << "\n--- Transaction Logs ---\n";
    for (int i = 0; i < logIndex; i++) {
        cout << logs[i] << endl;
    }

    return 0;
}
