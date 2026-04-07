#include <iostream>
using namespace std;

class Account {
public:
    int account_no;
    string password;
    float balance;
    string ownerName;

    Account(int account_no, string password, float balance, string ownerName) {
        this->account_no = account_no;
        this->password = password;
        this->balance = balance;
        this->ownerName = ownerName;
    }

    bool login(int acc_no, string pass) {
        return (account_no == acc_no && password == pass);
    }

    void withdraw(float amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        }
    }

    void deposit(float amount) {
        balance += amount;
        cout << "Deposit successful. New balance: " << balance << endl;
    }

    void checkBalance() {
        cout << "Total current balance: " << balance << endl;
    }
};

int main() {
    // Create accounts
    Account nahid(232, "pass", 250.00, "Nahid");
    Account tamim(27, "yo1", 90.00, "Tamim");

    int acc_no;
    string pass;

    cout << "Enter your account number: ";
    cin >> acc_no;
    cout << "Enter your password: ";
    cin >> pass;

    Account* currentAccount = nullptr;

    // Verify login
    if (nahid.login(acc_no, pass)) {
        currentAccount = &nahid;
    } else if (tamim.login(acc_no, pass)) {
        currentAccount = &tamim;
    } else {
        cout << "Invalid account number or password!" << endl;
        return 0;
    }

    // Welcome message
    cout << "Welcome, " << currentAccount->ownerName << "!" << endl;

    // Menu loop
    char choice;
    // do {
        cout << "\nInsert what you want to do: " << endl;
        cout << "'W' for withdraw\n'D' for deposit\n'C' for check balance\n'E' to exit\n";
        cin >> choice;

        float amount;
        switch (choice) {
            case 'W':
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                currentAccount->withdraw(amount);
                break;
            case 'D':
                cout << "Enter amount to deposit: ";
                cin >> amount;
                currentAccount->deposit(amount);
                break;
            case 'C':
                currentAccount->checkBalance();
                break;
            case 'E':
                cout << "Goodbye, " << currentAccount->ownerName << "!" << endl;
                break;
            default:
                cout << "Invalid option!" << endl;
        }
    // } while (choice != 'E');

    return 0;
}
