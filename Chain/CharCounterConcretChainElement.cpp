#include <iostream>
#include "CharCounterConcretChainElement.hpp"

CharCounterConcretChainElement::CharCounterConcretChainElement()
{
	this->setNext(NULL);
}

CharCounterConcretChainElement::~CharCounterConcretChainElement()
{
	this->setNext(NULL);
}

void CharCounterConcretChainElement::writeResults() const
{
	std::cout << "\t\tThe string: " << buffer << " has " << buffer.length() << " chars" << std::endl;
}

string CharCounterConcretChainElement::getName()
{
	return (this->name);
}

void CharCounterConcretChainElement::internalProcessing(std::shared_ptr<MyDataObject> value)
{
	buffer = value->getValue();
}

