//
// Created by Admin on 26.02.2024.
//

#ifndef LABA2OOP_SAVINGS_H
#define LABA2OOP_SAVINGS_H

using namespace std;

class Savings {
private:
    double balance;
public:
    Savings(double newBalance = 0);
    void deposit(double amount);
    void withdraw(double amount);
    double getBalance();
};



#endif //LABA2OOP_SAVINGS_H
