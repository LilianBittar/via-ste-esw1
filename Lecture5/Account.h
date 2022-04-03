#pragma once 

typedef enum AccountStatus{
    OK,
    OVER_MAX_CREDIT_LIMIT,
    ACCOUNT_NOT_INSTANTIATED
}AccountStatus;

typedef struct account* account_t; //the abstract data type (ADT)

account_t account_create(int accountNo, double creditLimit, double balance);

void account_destroy(account_t self);
AccountStatus withdraw(account_t self, double amount);
AccountStatus deposit(account_t self, double amount);
double getBalance(account_t self);
double getCreditLimit(account_t self);
int getAccountNo(account_t self);