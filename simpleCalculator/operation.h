#ifndef OPERATION_H
#define OPERATION_H

class operation
{
public:
    virtual ~operation() {}
    virtual double compute(double a, double b) const = 0;
};

#endif // OPERATION_H
