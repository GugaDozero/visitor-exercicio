#include "togglecasevisitor.h"
#include "elementa.h"
#include "elementb.h"

#include <string>
#include <cctype>

using std::string;

void ToggleCaseVisitor::visit(ElementA *elementA)
{
    int counter = 0;

    string newName = elementA->name();

    for(auto iter = newName.begin(); iter != newName.end(); ++iter, ++counter)
    {
        if(counter & 1)
        {
            if(isalpha(*iter)) *iter &= ~(0x20);
        }
        else
        {
             if(isalpha(*iter)) *iter |= 0x20;
        }

    }

    elementA->setName(newName);
}

void ToggleCaseVisitor::visit(ElementB *elementB)
{
    int counter = 0;

    string newName = elementB->name();

    for(auto iter = newName.begin(); iter != newName.end(); ++iter, ++counter)
    {
        if(counter & 1)
        {
            if(isalpha(*iter)) *iter &= ~(0x20);
        }
        else
        {
            if(isalpha(*iter)) *iter |= 0x20;
        }
    }

    elementB->setName(newName);
}

