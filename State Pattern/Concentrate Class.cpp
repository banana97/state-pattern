


class CMorning : public CBaseState
{
public:
    virtual CBaseState* GetNextState();
    virtual    char* ToString();
};


class CEvening : public CBaseState
{
public:
    virtual CBaseState* GetNextState();
    virtual    char* ToString();
};


class CNight: public CBaseState
{
public:
    virtual CBaseState* GetNextState();
    virtual    char* ToString();
};