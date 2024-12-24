#ifndef _BANK_ACCOUNT_H_
#define _BANK_ACCOUNT_H_

#include <string>
#include <cstdint>

class BankAccount
{
private:
    std::string _owner;
    std::string _accountTitle;
    int64_t _balance;
public:
    BankAccount(const std::string rOwner, const std::string rAccountTitle, const int64_t rBalance) 
                : _owner(rOwner), _accountTitle(rAccountTitle), _balance(rBalance) {};
    virtual ~BankAccount() = default;
    std::string getOwner(void) const { return _owner; };
    std::string getAccountTitle(void) const { return _accountTitle; };
};

#endif