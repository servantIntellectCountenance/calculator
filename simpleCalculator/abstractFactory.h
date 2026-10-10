#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

#include "operation.h"
class abstractFactory
{
public:
    static abstractFactory& instance();  // Singleton accessor

    operation* create(char op);  // Factory method

private:
    abstractFactory() {}   // Private constructor
    abstractFactory(const abstractFactory&) = delete;
    abstractFactory& operator=(const abstractFactory&) = delete;

};

#endif // ABSTRACTFACTORY_H
