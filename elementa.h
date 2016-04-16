#ifndef ELEMENTA_H
#define ELEMENTA_H

#include "ielement.h"

#include <string>

using std::string;

class ElementA : public IElement
{
public:
    ElementA(const string &name) : m_name(name) {}
    virtual void accept(IVisitor *visitor);

    inline string name() { return this->m_name; }
    virtual void setName(const std::string &name) { this->m_name = name; }

private:
    string m_name;
};

#endif // ELEMENTA_H
