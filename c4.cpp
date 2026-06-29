#include<iostream>
using namespace std;

class BankAccount
{
public:
    float balance;

    void deposit(float amount)
    {
        balance = balance + amount;
    }

    void withdraw(float amount)
    {
        balance = balance - amount;
    }

    void display()
    {
        cout << "Final Balance = " << balance;
    }
};

int main()
{
    BankAccount b;

    b.balance = 1000;

    b.deposit(500);
    b.withdraw(300);

    b.display();

    return 0;
}