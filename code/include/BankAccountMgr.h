#ifndef _BANK_ACCOUNT_MGR_H_
#define _BANK_ACCOUNT_MGR_H_

#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <cstdint>

#include "InputMgr.h"
#include "BankAccount.h"

enum BankOrder
{ 
    CREATE_NEW_ACCOUNT = 1,
    DEPOSIT_AMOUNT = 2,
    WITHDRAW_AMOUNT = 3,
    BALANCE_ENQUIRY = 4,
    ALL_ACCOUNT_HOLDER_LIST = 5,
    CLOSE_AN_ACCOUNT = 6,
    MODIFY_AN_ACCOUNT = 7,
    EXIT = 8
};

class BankAccountMgr
{
private:
    // why no map with as key tuple<_owner, _title> ? -> because it's only usefull for a certain amount of data (which here will not be reached I think)
    std::vector<BankAccount> _vBankAccount;
public:
    BankAccountMgr() = default;
    virtual ~BankAccountMgr() = default;
    void createNewAccount(void);
    uint8_t handleUserInput(const int& rUserInput);
    bool doAccountAlreadyExists(const std::string& rAccountOwner, const std::string& rAccountTitle);
    void addAccountToVectorIfNew(const std::string& rAccountOwner, const std::string& rAccountTitle);
    int64_t getNewAccountBalance(void);
};

#endif