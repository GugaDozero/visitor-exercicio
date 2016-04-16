#include "elementb.h"
#include "ivisitor.h"

void ElementB::accept(IVisitor *visitor)
{
    visitor->visit(this);
}
