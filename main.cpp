#include "Budget.h"
#include "Expense.h"
#include "Savings.h"

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
double savingsAction(){
    double amount = 0;
    cin>>amount;
    return amount;

}
using namespace std;
int main() {

    Budget myBudget;
    Savings mySavings(300,1.5);
    bool isWorking = true;


    while (isWorking){
        int choice = 0;
        cout<<"\nWelcome to Budget Tracker"<<endl;
        cout<<"Choose option: "
              "\n1: Add Expense to Budget"
              "\n2: Show Expenses"
              "\n3: Show saving balance"
              "\n4: Deposit to savings"
              "\n5: Withdraw from savings"
              "\n6: Delete last expense"
              "\n7: Show Interest Rate"
              "\n8: Exit"
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
                cout<<"\nBalance: "<<mySavings.getBalance()<<endl;
                break;
            case 4:
                cout<<"Enter amount that you want deposit: ";
                mySavings.deposit(savingsAction());

                break;
            case 5:
                cout<<"Enter amount that you want to withdraw: ";
                mySavings.withdraw(savingsAction());
                break;
            case 6:
                -myBudget;
                break;
            case 7:
                cout<<"Interest Rate: "<<mySavings.getInterestRate()<<endl;
                break;
            case 8:
                isWorking = false;
                break;
            default:
                cout<<"Wrong choice";
                break;
        }
    }

    Budget extraBudget = move(myBudget); //move const
    return 0;
}