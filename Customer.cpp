// Customer.cpp
#include "Customer.h"
#include <iostream>
using namespace std;

Customer::Customer(string name, int age, string username, string password, int id, double balance)
    : name(name), age(age), username(username), password(password), id(id), balance(balance) {}

string Customer::getName() const { return name; }
int Customer::getAge() const { return age; }
string Customer::getUsername() const { return username; }
string Customer::getPassword() const { return password; }
int Customer::getId() const { return id; }
double Customer::getBalance() const { return balance; }

void Customer::withdraw(double amount) {
    if (balance >= amount) {
        balance -= amount;
        cout << "Withdrawn $" << amount << " from account " << id << endl;
    }
    else {
        cout << "Insufficient funds in account " << id << endl;
    }
}

void Customer::deposit(double amount) {
    balance += amount;
    cout << "Deposited $" << amount << " to account " << id << endl;
}

void Customer::displayAccountInfo() {
    cout << "Name: " << name << ", "
        << "Age: " << age << ", "
        << "Username: " << username << ", "
        << "ID: " << id << ", "
        << "Balance: $" << balance << endl;
}
