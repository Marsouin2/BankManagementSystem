#include "InputMgr.h"

int InputMgr::readInput(void)
{
    int input;
    // ici faut lire l'input donne par l'utilisateur et l'envoyer a BankAccountMgr pour
    // qu'il fasse ce qu'il faut avec l'input
    std::cin >> input;

    return input;
}

void InputMgr::displayMainMenu(void)
{
    std::cout << "======================" << std::endl;
    std::cout << "BANK MANAGEMENT SYSTEM" << std::endl;
    std::cout << "======================" << std::endl;
    std::cout << "     ::MAIN MENU::    " << std::endl;
    std::cout << '\n';
    std::cout << "1. NEW ACCOUNT" << std::endl;
    std::cout << "2. DEPOSIT AMOUNT" << std::endl;
    std::cout << "3. WITHDRAW AMOUNT" << std::endl;
    std::cout << "4. BALANCE ENQUIRY" << std::endl;
    std::cout << "5. ALL ACCOUNT HOLDER LIST" << std::endl;
    std::cout << "6. CLOSE AN ACCOUNT" << std::endl;
    std::cout << "7. MODIFY AN ACCOUNT" << std::endl;
    std::cout << "8. EXIT" << std::endl;
    std::cout << '\n';
    std::cout << "Select Your Option (1-8):" << std::endl;
}