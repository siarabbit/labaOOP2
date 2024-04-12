//
// Created by Admin on 26.02.24.
//

#ifndef LABA2OOP_BUDGET_H
#define LABA2OOP_BUDGET_H


#include <vector>
#include "Expense.h"
#include <iostream>
using namespace std;
class Budget {
private:
    vector<Expense> expenses;//Has-A
public:
    Budget(vector<Expense>newBudget = {});//c
    void addExpense(const Expense& expense);
    void getTotalExpenses();
    Budget(const Budget &other);//copy
    Budget(Budget &&other);//move cons

    void operator -();//унарний

    ~Budget();
};


#endif //LABA2OOP_BUDGET_H
