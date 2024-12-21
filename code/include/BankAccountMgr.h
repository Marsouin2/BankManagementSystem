#include <map>
#include <string>
#include <iostream>

#include "AccountMgr.h"

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
    std::map<std::string, AccountMgr> _accountOwners;
public:
    BankAccountMgr() = default;
    virtual ~BankAccountMgr() = default;
    void handleUserInput(const int& rUserInput);
};