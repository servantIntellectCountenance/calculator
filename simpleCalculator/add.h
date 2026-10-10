#ifndef ADD_H
#define ADD_H

#include "operation.h"

class add : public operation
{
public:
    //add();
    double compute(double a, double b) const override;
};

#endif // ADD_H
