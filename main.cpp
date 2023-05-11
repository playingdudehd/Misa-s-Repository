/*
Project for CS_201

Author: Misael Amador Gonzalez
Student ID: kp7597 

*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "project.h"

using namespace std;

// IMPLEMENT HERE

BankAccount::BankAccount()
{
    m_accountNumber = 0;

}

BankAccount::BankAccount(float a)
{
    m_balance = a;
}

int BankAccount::getAccountNumber()
{
    return m_accountNumber;
}

float BankAccount::getBalance()
{
    return m_balance;
}

void BankAccount::deposit(float b)
{
    m_balance = m_balance + b;
}

bool BankAccount::withdraw(float c)
{
    if (c > m_balance) {
        cout << "Error: Insufficient balance" << endl;
        return false;
    }
    else {
        m_balance -= c;
        return true;
    }
}

Customer::Customer(string a)
{
    m_name = a;
}

string Customer::getName()
{
    return m_name;
}

vector <BankAccount *> Customer::getAccounts()
{
    return m_accounts;
}

int Customer::getNumAccounts()
{
    return m_accounts.size();
}

void Customer::addAccount(BankAccount &account)
{
    m_accounts.push_back(&account);
}

bool Customer::removeAccount(BankAccount &account)
{
     for (auto it = m_accounts.begin(); it != m_accounts.end(); ++it)
    {
        if (*it == &account)
        {
            m_accounts.erase(it);
            return true;
        }
    }
    return false;
}

Bank::Bank(string a)
{
    m_name = a;
}

vector<Customer *> Bank::getCustomers()
{
    return m_customers;
}

int Bank::getNumCustomers()
{
    return m_NumCustomers;
}

void Bank::addCustomer(Customer &customer)
{
    m_customers.push_back(&customer);
    m_NumCustomers++;
}

bool Bank::removeCustomer(string name)
{
       for (auto it = m_customers.begin(); it != m_customers.end(); ++it)
    {
        if ((*it)->getName() == name)
        {
            m_customers.erase(it);
            return true;
        }
    }
    return false;

}

bool Bank::transfer(BankAccount &from_account, BankAccount &to_account, float amount)
{
    if (from_account.withdraw(amount))
    {
        to_account.deposit(amount);
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    BankAccount account_1 = BankAccount();
    BankAccount account_2 = BankAccount(1000);   //this is their balance
    BankAccount account_3 = BankAccount(500);
    BankAccount account_4 = BankAccount(3650);
    BankAccount account_5 = BankAccount(27553);
    BankAccount account_6 = BankAccount(100);

    Customer customer_1 = Customer("Alice");   // names
    Customer customer_2 = Customer("Bob");

    customer_1.addAccount(account_1);    //adding accounts
    customer_1.addAccount(account_2);

    customer_2.addAccount(account_3);
    customer_2.addAccount(account_4);
    customer_2.addAccount(account_5);

    // Check the number of account for customers
    cout << "Check: " << customer_1.getNumAccounts() << " = 2" << endl;
    cout << "Check: " << customer_2.getNumAccounts() << " = 3\n"
              << endl;

    Bank bank("ABC");

    bank.addCustomer(customer_1);
    bank.addCustomer(customer_2);

    // Check the number of customer for customers
    cout << "Check: " << bank.getNumCustomers() << " = 2\n"
              << endl;

    // Check whether the new account is added
    customer_1.addAccount(account_6);
    cout << "Check: " << bank.getCustomers()[0]->getNumAccounts() << " = 3\n"
              << endl;

    // Check whether the account is updated
    account_1.deposit(100);
    cout << "Check: " << bank.getCustomers()[0]->getAccounts()[0]->getBalance() << " = 100\n"
              << endl;

    // Check whether the withdraw is failed
    account_1.withdraw(1000);
    cout << "Check: " << bank.getCustomers()[0]->getAccounts()[0]->getBalance() << " = 100\n"
              << endl;

    // Check whether the withdraw is done
    account_1.withdraw(100);
    cout << "Check: " << bank.getCustomers()[0]->getAccounts()[0]->getBalance() << " = 0\n"
              << endl;

    // Check whether the withdraw is failed
    account_1.withdraw(100);
    cout << "Check: " << bank.getCustomers()[0]->getAccounts()[0]->getBalance() << " = 0\n"
              << endl;

    // Check whether the transfer is done
    bank.transfer(account_2, account_3, 100.0);
    cout << "Check: " << bank.getCustomers()[0]->getAccounts()[1]->getBalance() << " = 900" << endl;
    cout << "Check: " << bank.getCustomers()[1]->getAccounts()[0]->getBalance() << " = 600\n"
              << endl;

    // Check whether the transfer is failed
    bank.transfer(account_2, account_3, 1000.0);
    cout << "Check: " << bank.getCustomers()[0]->getAccounts()[1]->getBalance() << " = 900" << endl;
    cout << "Check: " << bank.getCustomers()[1]->getAccounts()[0]->getBalance() << " = 600\n"
              << endl;

    customer_1.removeAccount(account_1);
    cout << "Check: " << bank.getCustomers()[0]->getNumAccounts() << " = 2\n"
              << endl;

    bank.removeCustomer("Alicee");
    cout << "Check: " << bank.getNumCustomers() << " = 2\n"
              << endl;

    bank.removeCustomer("Alice");
    cout << "Check: " << bank.getNumCustomers() << " = 1\n"
              << endl;

    bank.removeCustomer("Bob");
    cout << "Check: " << bank.getNumCustomers() << " = 0\n"
              << endl;

    return 0;
}
