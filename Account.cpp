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