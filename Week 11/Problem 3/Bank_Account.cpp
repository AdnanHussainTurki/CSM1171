#include <iostream>

using namespace std;

class Account
{
protected: 
    int number;
    string type;
    int balance;

public:
    Account(int number, string type) {
        this->number =number;
        this->type = type;
        this->balance = 0;
    }
    int getBalance() {
        return this->balance;
    }
    Account deposit(int amount)  {
        this->balance += amount;
        return *this;
    }
    int withdraw(int amount)  {
        if (this->balance >= amount)
        {
            this->balance -= amount;
            return amount;
        }
        return 0;
    }
    void printSummary(){
        puts("\n======================================");
        puts("========== ACCOUNT SUMMARY ===========");
        cout << "Account Number: " << this->number << endl;
        cout << "Account Type: " << this->type << endl;
        cout << "Account balance: " << this->getBalance() << endl;
        puts("======================================");
        puts("======================================\n");
    }
    
};
main() {
    puts("Provide the account number for the new account: ");
    int account_number; 
    cin >> account_number;

    puts("Provide the account type for the new account (Saving or Current)");
    string account_type;
    cin>>(account_type);

    Account acc1(account_number, account_type);
    puts("Congratulations, your bank account successfully created.");
    acc1.printSummary();

    puts("\n\nHow much amount you wish to deposit:");
    int depositable = 0;
    cin >> depositable;
    acc1.deposit(depositable);
    puts("Congratulations, amount successfully deposited into your account");
    acc1.printSummary();

    puts("\n\nHow much amount you wish to withdraw:");
    int withdraw = 0;
    cin >> withdraw;
    int amount_withdrawed = acc1.withdraw(withdraw);
    if (amount_withdrawed > 0)
    {
        puts("Congratulations, amount successfully withdrawed from your account");
    } else {
        puts("Oops. Withdrawal failed probably due to insufficient funds.");
    }
    
    acc1.printSummary();


}