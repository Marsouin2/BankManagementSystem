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