//
// Created by Admin on 26.02.24.
//

#include "Expense.h"

Expense::Expense() {}

Expense::Expense(string newCategory, double newAmount)
    :category{newCategory},amount{newAmount}{}

string Expense::getCategory() {
    return category;
}

double Expense::getAmount() {
    return amount;
}

Expense::~Expense() {}