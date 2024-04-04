//
// Created by Admin on 26.02.2024.
//

#include "Savings.h"
#include <iostream>
using namespace std;
Savings::Savings(double newBalance)// конст с параметрами за замовчуванням
        :balance{newBalance}{}

void Savings::deposit(double amount) {
    if(amount<=0){
        cout<<"You cant deposit 0 or less dollars"<<endl;
    }else{
        this->balance += amount;// звертається до полів класу
    }
}

void Savings::withdraw(double amount) {
    if(this->balance < amount){
        cout<<"Cant proceed the withdraw. Low balance!"<<endl;
    }else{
       this->balance -= amount;
    }
}

double Savings::getBalance() const{ //
    return this->balance;
}
Savings::~Savings(){}

ostream &operator<<(ostream &output, Savings &p) {
    output<<"\nBalance: "<<p.getBalance()<<endl;
    return output;
}
