//
// Created by Admin on 26.02.24.
//

#include "Budget.h"

void Budget::addExpense(const Expense &expense) {
    expenses.push_back(expense);
}
void Budget::getTotalExpenses() {
    double total = 0;
    for(int i=0;i<expenses.size();++i){
        cout<<"\nCategory: "<<expenses[i].getCategory()<<endl;
        cout<<"Amount: "<<expenses[i].getAmount()<<endl;
    }
}

Budget::Budget(vector<Expense> newBudget)
    :expenses{newBudget}{}

Budget::Budget(const Budget& other)
        :expenses(other.expenses){};
Budget::Budget(Budget &&other)
        :expenses(other.expenses){
    other.expenses = {};
}

Budget::~Budget() {}