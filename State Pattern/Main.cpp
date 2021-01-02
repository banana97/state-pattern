#include <iostream>;
#include <string>;
using namespace std;

int main()
{
    CSun objSun(new CMorning);
    printf("\n\nSun Says Good %s !!!",objSun.GetStateName());
    objSun.StateChanged();
    printf("\n\nSun Says Good %s !!!",objSun.GetStateName());
    objSun.StateChanged();
    printf("\n\nSun Says Good %s !!!",objSun.GetStateName());
    objSun.StateChanged();	
    printf("\n\nSun Says Good %s !!!",objSun.GetStateName());


    return 0;
}


// Handles the state change
void CSun::StateChanged()
{
    if (m_pState)
    {
        CBaseState* pState = m_pState->GetNextState();
        delete m_pState;
          m_pState = pState;
    }
}

CBaseState* CMorning::GetNextState()
{
    return new CEvening;
}


CBaseState* CEvening::GetNextState()
{
    return new CNight;
}

CBaseState* CNight::GetNextState()
{
    return new CMorning;
}

