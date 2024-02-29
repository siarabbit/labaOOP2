//
// Created by Admin on 26.02.2024.
//

#include "Savings.h"
#include <iostream>
using namespace std;
Savings::Savings(double newBalance)
        :balance{newBalance}{}

void Savings::deposit(double amount) {
    if(amount<=0){
        cout<<"You cant deposit 0 or less dollars"<<endl;
    }else{
        this->balance += amount;
    }
}

void Savings::withdraw(double amount) {
    if(this->balance < amount){
        cout<<"Cant proceed the withdraw. Low balance!"<<endl;
    }else{
       this->balance -= amount;
    }
}

double Savings::getBalance() const{
    return this->balance;
}
Savings::~Savings(){}
