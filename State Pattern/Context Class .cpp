
class CSun
{
public:
    CSun();
    CSun(CBaseState * pContext);
    ~CSun();
    void StateChanged();
    char* GetStateName();
protected:
    void DoCleanUp();
    CBaseState* m_pState;
};