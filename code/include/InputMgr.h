#ifndef _INPUT_MGR_H_
#define _INPUT_MGR_H_

#include <iostream>

class InputMgr
{
private:

public:
    InputMgr() = default;
    virtual ~InputMgr() = default;
    void displayMainMenu(void);
    int readInput(void);
};

#endif