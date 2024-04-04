//
// Created by Admin on 04.04.2024.
//

#include "Account.h"

void Account::withdraw(double amount) {
    if(amount < this->balance){
        this->balance = this->balance - amount;
    }else{
        cout<<"Invalid amount to withdraw"<<endl;
    }
}

void Account::deposit(double amount) {
    if(amount > 0){
        this->balance = this->balance + amount;
    }
}

double Account::getBalance() const {
    return this->balance;
}
Account::Account(double newBalance)
        :balance(newBalance){

}

Account::~Account() {

}
Account &Account::operator=(Account &other) {
    if(this == &other){
        return this;
    }
    this->balance = other.balance;
    returnthis;
}

Account::Account(Account&& other)
        :balance(other.balance){
    other.balance = 0;
}