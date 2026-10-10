#ifndef MULTIPLY_H
#define MULTIPLY_H

#include "operation.h"

class multiply : public operation
{
public:
    //multiply();
    double compute(double a, double b) const override;
};

#endif // MULTIPLY_H
