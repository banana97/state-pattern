class CBaseState
{
public:
    virtual CBaseState* GetNextState() = 0;
    virtual char* ToString() = 0;
};