#include "stdafx.h"
#include "ConcreteCreator.h"
#include "ConcreteProduct.h"


Product* ConcreteCreator::FactoryMethod()
{
    return new ConcreteProduct();
}
