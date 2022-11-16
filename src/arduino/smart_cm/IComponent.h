#ifndef __ICOMPONENT__
#define __ICOMPONENT__

class IComponent
{
public:
    virtual void setPin(uint8_t pin) = 0;
    virtual void setMode(uint8_t mode) = 0;
    virtual uint8_t getPin() = 0;
    virtual uint8_t getMode() = 0;
};

#endif