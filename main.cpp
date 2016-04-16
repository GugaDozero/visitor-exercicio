#include <iostream>
#include <list>
#include <algorithm>

#include "ivisitor.h"
#include "ielement.h"
#include "elementa.h"
#include "elementb.h"
#include "togglecasevisitor.h"

using namespace std;

int main()
{
    list<IVisitor *> visitorList;
    visitorList.push_back(new ToggleCaseVisitor);

    list<IElement *> elementList;
    elementList.push_back(new ElementA("testando essa porcaria"));
    elementList.push_back(new ElementB("outra porcaria pra testar"));

    for_each(elementList.begin(), elementList.end(), [&](IElement *element)
    {
        for_each(visitorList.begin(), visitorList.end(), [&](IVisitor *visitor)
        {
            element->accept(visitor);
        });
    });

    // testando

    for_each(elementList.begin(), elementList.end(), [&](IElement *element)
    {
        cout << element->name() << endl;
    });

    cin.get();

    return 0;
}

