#include <iostream>

#include "InputMgr.h"
#include "ProgramHandler.h"
#include "BankAccountMgr.h"

int main(void)
{
    InputMgr *inputMgr = new InputMgr();
    BankAccountMgr *bankAccountMgr = new BankAccountMgr();
    // SingletonProgramHandler

    while (programHandler->isRunning())
    {
        bankAccountMgr->handleUserInput(inputMgr->readInput());
    }

    delete inputMgr;
    delete bankAccountMgr;
    return 0;
}