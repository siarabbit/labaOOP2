//
// Created by Admin on 26.02.2024.
//

#include "Savings.h"
#include <iostream>
using namespace std;

Savings::Savings(double newBalance,double newInterestRate) :
        balance(newBalance), interestRate(newInterestRate) {
}

Savings::~Savings() {}

double Savings::getInterestRate() const {
    return this->interestRate;
}
Savings &Savings::operator=(Savings &other){//перевизначання op
    if(this == &other){
        return *this;
    }
    this->balance = other.balance;
    this->interestRate = other.interestRate;
    return *this;
}

Savings::Savings(Savings &&other)//перевизначання move
        : balance(other.balance),interestRate(other.interestRate){
    this->balance = 0;
    this->interestRate = 0;
}

double Savings::getBalance() const {
    return this->balance;
}

void Savings::deposit(double amount) {
    if(amount > 0){
        this->balance = this->balance + amount;
    }
}

void Savings::withdraw(double amount) {
    if(amount < this->balance){
        this->balance = this->balance - amount;
    }else{
        cout<<"Invalid amount to withdraw"<<endl;
    }

}
