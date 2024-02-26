//
// Created by Admin on 26.02.24.
//

#ifndef LABA2OOP_EXPENSE_H
#define LABA2OOP_EXPENSE_H
#include <string>
using namespace std;
class Expense {
private:
    string category;
    double amount;
public:
    Expense();
    Expense(string newCategory,double newAmount);

    string getCategory();
    double getAmount();
    ~Expense();
};


#endif //LABA2OOP_EXPENSE_H
