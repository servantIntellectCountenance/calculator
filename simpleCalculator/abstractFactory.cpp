#include "abstractFactory.h"
#include "add.h"
#include "subtract.h"
#include "multiply.h"
#include "divide.h"


abstractFactory &abstractFactory::instance()
{
    static abstractFactory inst;
    return inst;
}

operation *abstractFactory::create(char op)
{
    switch (op) {
    case '+': return new add();
    case '-': return new subtract();
    case '*': return new multiply();
    case '/': return new divide();
    }
    //return nullptr;


}
