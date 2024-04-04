//
// Created by Admin on 26.02.24.
//

#include "Expense.h"

Expense::Expense() {}// делегування, викликає наступний конструктор

Expense::Expense(string newCategory, double newAmount)
    :category{newCategory},amount{newAmount}{}

string Expense::getCategory() {
    return category;
}

double Expense::getAmount() {
    return amount;
}

Expense::~Expense() {}