#ifndef TOGGLECASEVISITOR_H
#define TOGGLECASEVISITOR_H

#include "ivisitor.h"

class ToggleCaseVisitor : public IVisitor
{
public:
    virtual void visit(ElementA *elementA);
    virtual void visit(ElementB *elementB);
};

#endif // TOGGLECASEVISITOR_H
