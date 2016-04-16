#ifndef IELEMENT_H
#define IELEMENT_H

#include <string>

using std::string;

class IVisitor;

class IElement
{
public:
    virtual void accept(IVisitor *visitor) = 0;


    virtual string name() { return ""; }
    virtual void setName(const string & name) {}
};

#endif // IELEMENT_H
