#include <iostream>

#include "../include/InputMgr.h"
#include "../include/SingletonProgramHandler.h"
#include "../include/BankAccountMgr.h"

int main(void)
{
    InputMgr *inputMgr = new InputMgr();
    BankAccountMgr *bankAccountMgr = new BankAccountMgr();
    SingletonProgramHandler& singletonProgramHandler = SingletonProgramHandler::getInstance();

    while (singletonProgramHandler.getIsProgramRunning())
    {
        inputMgr->displayMainMenu();
        // trouver mieux que cette merde pour la gestion de la boucle du programme
        // c'est pas bankAccountMgr qui est cense gerer l'input donc renommer handleUserInput ou faire autrement
        if (1 == bankAccountMgr->handleUserInput(inputMgr->readIntInput()))
        {
            singletonProgramHandler.setIsProgramRunning(false);
        }
    }

    // voir pour degager ca si possible (smart pointers au pire)
    delete inputMgr;
    delete bankAccountMgr;
    return 0;
}