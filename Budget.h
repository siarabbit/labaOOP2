//
// Created by eduard on 26.02.24.
//

#ifndef PIZDA_BUDGET_H
#define PIZDA_BUDGET_H


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
    double getTotalExpenses();
    ~Budget();
};


#endif //PIZDA_BUDGET_H
