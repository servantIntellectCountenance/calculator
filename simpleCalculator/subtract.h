#ifndef SUBTRACT_H
#define SUBTRACT_H

#include "operation.h"

class subtract : public operation
{
public:
    //subtract();
    double compute(double a, double b) const override;
};

#endif // SUBTRACT_H
