#include "../include/BankAccountMgr.h"

/*BankOrder BankAccountMgr::intToEnumBankOrder(const int& rUserInput)
{

}

void BankAccountMgr::createNewAccount()
{

}

void BankAccountMgr::exit(void)
{
    // ici faudrait envoyer a la classe ProgramHandler un bool a false pour couper le programme
    
}*/

void unknownUserInput(void)
{
    std::cout << "ERROR : this number is unknown, please enter something valid" << std::endl;
}

void BankAccountMgr::handleUserInput(const int& rUserInput)
{
    // mettre tableau de pointeurs sur fonctions au lieu de foret de if deg
    if (CREATE_NEW_ACCOUNT == rUserInput)
    {

    }
    else if (EXIT == rUserInput)
    {

    }
    else
    {
    }
}