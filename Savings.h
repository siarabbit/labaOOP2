//
// Created by Admin on 26.02.2024.
//

#ifndef LABA2OOP_SAVINGS_H
#define LABA2OOP_SAVINGS_H

#include <ostream>
#include "Account.h"
using namespace std;

class Savings : public Account{// Is-A relationship
private:
    double balance;
    double interestRate;
public:
    double getBalance() const override final;
    void deposit(double amount) override final ;
    void withdraw(double amount) override final;
    Savings(Savings&& other);
    Savings& operator = (Savings& other);
    double getInterestRate() const;
    Savings(double newBalance,double newInterestRate);//конст
    virtual ~Savings();//дест
};



#endif //LABA2OOP_SAVINGS_H
