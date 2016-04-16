#ifndef IVISITOR_H
#define IVISITOR_H

class ElementA;
class ElementB;

class IVisitor
{
public:
    virtual void visit(ElementA *elementA) = 0;
    virtual void visit(ElementB *elementB) = 0;
};

#endif // IVISITOR_H
