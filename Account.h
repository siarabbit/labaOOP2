//
// Created by Admin on 04.04.2024.
//

#ifndef LABA2OOP_ACCOUNT_H
#define LABA2OOP_ACCOUNT_H


#include <iostream>
#include <string>

using namespace std;
class Account {
public:
    virtual double getBalance() const = 0;
    virtual void deposit(double amount) = 0;
    virtual void withdraw(double amount) = 0;

};




#endif //LABA2OOP_ACCOUNT_H
