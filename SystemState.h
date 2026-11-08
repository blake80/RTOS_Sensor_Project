#ifndef SYSTEMSTATE_H
#define SYSTEMSTATE_H

struct SystemState
{
    bool overTemp;
    bool systemFault;
    unsigned int cycleCount;
};

#endif