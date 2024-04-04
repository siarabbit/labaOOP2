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
    :expenses{newBudget}{}//c

Budget::Budget(const Budget& other)// copy const
        :expenses(other.expenses){};
Budget::Budget(Budget &&other)// move const
        :expenses(other.expenses){
    other.expenses = {};
}
void Budget::operator-() {//унарний оператор, прибирає останню витрату з Budget
    this->expenses.erase(this->expenses.end());
    cout<<"Deleted"<<endl;

}
Budget::~Budget() {}