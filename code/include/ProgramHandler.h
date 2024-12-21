class SingletonProgramHandler
{
private:
    bool _isProgramRunning;

public:
    SingletonProgramHandler() : _isProgramRunning(true) { };
    static void setIsProgramRunning(const bool& rIsProgramRunning) { _isProgramRunning = rIsProgramRunning };
    virtual ~SingletonProgramHandler() = default;
};