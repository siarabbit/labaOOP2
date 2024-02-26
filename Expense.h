//
// Created by eduard on 26.02.24.
//

#ifndef PIZDA_EXPENSE_H
#define PIZDA_EXPENSE_H
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


#endif //PIZDA_EXPENSE_H
