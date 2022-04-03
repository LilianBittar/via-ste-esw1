#include "Account.h"
#include <stdlib.h>

typedef struct account
{
    int accountNo;
    double creditLimit;
    double balance;
}account;


account_t account_create(int accountNo, double creditLimit, double balance){
     account_t new_account = calloc(sizeof(account), 1);
    //we use collac to make sure that the memory is clean 
    if(NULL == new_account){
        return NULL;
    }
    
    new_account -> accountNo = accountNo;
    new_account -> creditLimit = creditLimit;
    new_account -> balance = balance;

    return new_account;
}

void account_destroy(account_t self){
    if(self == NULL) {return ACCOUNT_NOT_INSTANTIATED;}
    free(self);
}


AccountStatus withdraw(account_t self, double amount){
    if(self -> accountNo > amount){
        self -> accountNo = self -> accountNo - amount;
        return OK;
    }
    return OVER_MAX_CREDIT_LIMIT;
}

AccountStatus deposit(account_t self, double amount){
    self -> accountNo = self -> accountNo + amount;
    return OK;
}

double getBalance(account_t self){
    return self -> balance;
}

double getCreditLimit(account_t self){
    return self -> creditLimit;
}

int getAccountNo(account_t self){
    return self ->accountNo;
}