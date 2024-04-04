//
// Created by Admin on 26.02.2024.
//

#ifndef LABA2OOP_SAVINGS_H
#define LABA2OOP_SAVINGS_H

#include <ostream>
#include "Account.h"
using namespace std;

class Savings : public Account{
private:
    double interestRate;
public:
    double getInterestRate() const;
    Savings(double newBalance,double newInterestRate);
    ~Savings();
};



#endif //LABA2OOP_SAVINGS_H
