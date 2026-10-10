#ifndef DIVIDE_H
#define DIVIDE_H

#include "operation.h"

class divide : public operation
{
public:
    //divide();
    double compute(double a, double b) const override;
};

#endif // DIVIDE_H
