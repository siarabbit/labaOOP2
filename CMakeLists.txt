cmake_minimum_required(VERSION 3.26)
project(laba2OOP)

set(CMAKE_CXX_STANDARD 17)

add_executable(laba2OOP main.cpp
        Expense.cpp
        Expense.h
        Budget.cpp
        Budget.h
        Savings.cpp
        Savings.h)
