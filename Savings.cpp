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
Savings &Savings::operator=(Savings &other){
    if(this == &other){
        return this;
    }
    Account::operator=(other);
    this->interestRate = other.interestRate;
    returnthis;
}

Savings::Savings(Savings &&other)
        : Account (std::move(other)),interestRate(other.interestRate){
    this->interestRate = 0;
}
