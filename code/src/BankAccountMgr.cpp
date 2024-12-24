#include "../include/BankAccountMgr.h"

void unknownUserInput(void)
{
    std::cout << "ERROR : this number is unknown, please enter something valid" << std::endl;
}

bool BankAccountMgr::doAccountAlreadyExists(const std::string& rAccountOwner, 
                                            const std::string& rAccountTitle)
{
    bool retVal = true;

    // check if an account with matching owner and title already exists or not
    retVal = std::any_of(_vBankAccount.begin(), _vBankAccount.end(), [&](const BankAccount& rBankAccount)
    {
        return rBankAccount.getOwner() == rAccountOwner && rBankAccount.getAccountTitle() == rAccountTitle;
    });

    return retVal;
}

int64_t BankAccountMgr::getNewAccountBalance(void)
{
    int64_t retVal = -1;

    std::cout << "Please enter the amount you would like to deposit to open your account : ";
    while (retVal < 0)
    {
        retVal = InputMgr::readIntInput();
        if (retVal < 0)
        {
            std::cerr << "You can't set a value which is below zero..." << std::endl;
        }
    }

    return retVal;
}

void BankAccountMgr::addAccountToVectorIfNew(const std::string& rAccountOwner, 
                                               const std::string& rAccountTitle)
{
    if (doAccountAlreadyExists(rAccountOwner, rAccountTitle))
    {
        std::cout << "An account already exists for you : the account has not been created." << std::endl;
    }
    else
    {
        int64_t balance = getNewAccountBalance();
        BankAccount tempoNewAccount(rAccountOwner, rAccountTitle, balance);
        _vBankAccount.push_back(tempoNewAccount);
        std::cout << "\nThe account has been successfully created.\n" << std::endl;
    }
}

void BankAccountMgr::createNewAccount(void)
{
    std::cout << "Can you give me the name of the owned of this account please : ";
    const std::string newAccountOwner = InputMgr::readStringInput();

    std::cout << "Can you give me the title of this account please : ";
    const std::string newAccountTitle = InputMgr::readStringInput();

    addAccountToVectorIfNew(newAccountOwner, newAccountTitle);
}

uint8_t BankAccountMgr::handleUserInput(const int& rUserInput)
{
    uint8_t retVal = 0;

    // mettre tableau de pointeurs sur fonctions au lieu de foret de if deg
    if (CREATE_NEW_ACCOUNT == rUserInput)
    {
        createNewAccount();
    }
    else if (EXIT == rUserInput)
    {
        retVal = 1;
    }
    else
    {
    }

    return retVal;
}