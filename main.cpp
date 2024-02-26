#include "Budget.h"
#include "Expense.h"

#include <iostream>
#include <string>

Expense addExpense(){
    string category;
    double price;
    cout<<"Write category: ";
    cin>>category;
    cout<<"Write a price: ";
    cin>>price;

    Expense newExpense(category,price);
    return newExpense;

}

using namespace std;
int main() {

    Budget myBudget;
    bool isWorking = true;

    while (isWorking){
        int choice = 0;
        cout<<"\nWelcome to Budget Tracker"<<endl;
        cout<<"Choose option: "
              "\n1: Add Expense to Budget"
              "\n2: Show Expenses"
              "\n3: Exit"
              "\nYour choice: ";
        cin>>choice;
        switch (choice) {
            case 1:
                myBudget.addExpense(addExpense());
                break;
            case 2:
                myBudget.getTotalExpenses();
                break;
            case 3:
                isWorking = false;
                break;
            default:
                cout<<"Wrong choice";
                break;
        }
    }


    return 0;
}