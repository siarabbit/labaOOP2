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
    vector<Expense> expenses;
public:
    Budget(vector<Expense>newBudget = {});
    void addExpense(const Expense& expense);
    void getTotalExpenses();
    ~Budget();
};


#endif //LABA2OOP_BUDGET_H
