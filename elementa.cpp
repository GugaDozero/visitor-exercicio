#include "elementa.h"
#include "ivisitor.h"

void ElementA::accept(IVisitor *visitor)
{
    visitor->visit(this);
}
