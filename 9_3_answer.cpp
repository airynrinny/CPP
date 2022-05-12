#include <iostream>
#include <iomanip>

using namespace std;

struct bankAccount {
    int     accNum;
    string  accName;
    float   accBal;
};

void deposit     (bankAccount&);
void withdraw    (bankAccount&);
void viewDetails (bankAccount&);

int main() {
    bankAccount myAcc;
    cout << "Enter account number  : ";     cin >> myAcc.accNum;
    cout << "Enter account name    : ";     cin >> myAcc.accName;
    cout << "Enter account balance : RM ";  cin >> myAcc.accBal;

    int choice;
    while(true) {
        cout << endl;
        cout << "Enter 1 to deposit money" << endl;
        cout << "      2 to withdraw money" << endl;
        cout << "      3 to view account details" << endl;
        cout << "      4 to exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            deposit(myAcc);
        }
        else if (choice == 2) {
            withdraw(myAcc);
        }
        else if (choice == 3) {
            viewDetails(myAcc);
        }
        else if (choice == 4) {
            break;
        }
        else {
            cout << "Invalid choice" << endl;
        }
    }

    cout << "Thank you for banking with us!" << endl << endl;
    return 0;
}

void deposit (bankAccount &acc) {
    cout << endl;
    cout << "Account Deposit" << endl;
    cout << "---------------" << endl;

    float am;
    cout << "Enter amount to deposit : RM ";
    cin >> am;

    if (am < 0) {
        cout << "Invalid deposit amount." << endl;
        return;
    }

    acc.accBal += am;
    cout << setprecision(2) << fixed;
    cout << endl << "New account balance: RM " << acc.accBal << endl << endl;
}

void withdraw(bankAccount &acc) {
    cout << endl;
    cout << "Account Withdraw" << endl;
    cout << "----------------" << endl;

    float am;
    cout << "Enter amount to withdraw : RM ";
    cin >> am;

    if (am > acc.accBal) {
        cout << "Invalid withdraw amount." << endl;
        return;
    }

    acc.accBal -= am;
    cout << setprecision(2) << fixed;
    cout << endl << "New account balance: RM " << acc.accBal << endl << endl;
}

void viewDetails(bankAccount &acc) {
    cout << endl;
    cout << "Account Details" << endl;
    cout << "----------------" << endl;

    cout << "Account number  : "    << acc.accNum  << endl;
    cout << "Account name    : "    << acc.accName << endl;
    cout << setprecision(2) << fixed;
    cout << "Account balance : RM " << acc.accBal  << endl;
    cout << endl;
}