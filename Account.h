//
// Created by Admin on 04.04.2024.
//

#ifndef LABA2OOP_ACCOUNT_H
#define LABA2OOP_ACCOUNT_H


#include <iostream>
#include <string>

using namespace std;
class Account {
private:
    double balance;
public:
    double getBalance() const;
    void deposit(double amount);
    void withdraw(double amount);
    Account(double newBalance = 0);
    ~Account();
};




#endif //LABA2OOP_ACCOUNT_H
