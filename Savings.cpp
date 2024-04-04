//
// Created by Admin on 26.02.2024.
//

#include "Savings.h"
#include <iostream>
using namespace std;

Savings::Savings(double newBalance,double newInterestRate) :
        Account(newBalance), interestRate(newInterestRate) {
}

Savings::~Savings() {}

double Savings::getInterestRate() const {
    return this->interestRate;
}