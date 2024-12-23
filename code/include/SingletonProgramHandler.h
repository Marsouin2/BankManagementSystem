#ifndef _SINGLETON_PROGRAM_HANDLER_H_
#define _SINGLETON_PROGRAM_HANDLER_H_

class SingletonProgramHandler
{
private:
    bool _isProgramRunning;
    SingletonProgramHandler() : _isProgramRunning(true) {};
    SingletonProgramHandler(SingletonProgramHandler& rCopyObject) = delete;
    void operator=(const SingletonProgramHandler& rCopyObject) = delete;

public:
    virtual ~SingletonProgramHandler() = default;
    static SingletonProgramHandler& getInstance(void)
    {
        static SingletonProgramHandler instance;
        return instance;
    }
    //SingletonProgramHandler* getInstance(void);
    void setIsProgramRunning(const bool& rIsProgramRunning);
    bool getIsProgramRunning(void) { return _isProgramRunning; };
};

#endif