#include "LedImpl.h"

void LedImpl::switchOn()
{
    digitalWrite(getPin(), HIGH);
    status = true;
}

void LedImpl::switchOff()
{
    digitalWrite(getPin(), LOW);
    status = false;
}