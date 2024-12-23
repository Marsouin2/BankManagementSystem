#include <iostream>

#include "../include/InputMgr.h"
#include "../include/SingletonProgramHandler.h"
#include "../include/BankAccountMgr.h"

int main(void)
{
    InputMgr *inputMgr = new InputMgr();
    BankAccountMgr *bankAccountMgr = new BankAccountMgr();
    SingletonProgramHandler& singletonProgramHandler = SingletonProgramHandler::getInstance();

    // SingletonProgramHandler

    while (singletonProgramHandler.getIsProgramRunning())
    {
        bankAccountMgr->handleUserInput(inputMgr->readInput());
    }

    delete inputMgr;
    delete bankAccountMgr;
    return 0;
}