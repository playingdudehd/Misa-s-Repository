#ifndef PROJECT_H
#define PROJECT_H
#include <iostream>
#include <vector>
#include <string>

class BankAccount
{
public:
    BankAccount();
    BankAccount(float balance);
    int getAccountNumber();
    float getBalance();
    void deposit(float cash);
    bool withdraw(float cash);

private:
    int m_accountNumber;
    float m_balance;
};

class Customer
{
public:
    Customer(std::string name);
    std::string getName();
    std::vector<BankAccount *> getAccounts();
    int getNumAccounts();
    void addAccount(BankAccount &account);
    bool removeAccount(BankAccount &account);

private:
    std::string m_name;
    std::vector<BankAccount *> m_accounts;
};

class Bank
{
public:
    Bank(std::string name);
    std::vector<Customer *> getCustomers();
    int getNumCustomers();
    void addCustomer(Customer &customer);
    bool removeCustomer(std::string name);
    bool transfer(BankAccount &from_account, BankAccount &to_account, float amount);

private:
    std::string m_name;
    std::vector<Customer *> m_customers;
    int m_NumCustomers;
};
#endif