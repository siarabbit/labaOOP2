//
// Created by Admin on 26.02.2024.
//

#ifndef LABA2OOP_SAVINGS_H
#define LABA2OOP_SAVINGS_H

#include <ostream>

using namespace std;

class Savings {
private:
    double balance;
public:
    Savings(double newBalance = 0);//c
    void deposit(double amount);
    void withdraw(double amount);
    friend ostream &operator << (ostream &output, Savings &p);// дружній оператор 7.
    double getBalance() const;// каже функції нічого не змінювати
    ~Savings();
};



#endif //LABA2OOP_SAVINGS_H
