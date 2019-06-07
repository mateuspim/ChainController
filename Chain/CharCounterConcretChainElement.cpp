#include <iostream>
#include "CharCounterConcretChainElement.hpp"

CharCounterConcretChainElement::CharCounterConcretChainElement()
{
	cout << "Added module: " << this->getName() << " to the chain";
	this->setNext(NULL);
}

CharCounterConcretChainElement::~CharCounterConcretChainElement()
{
	cout << "Deleted module: " << this->getName() << " from the chain" << endl;
	this->setNext(NULL);
}

void CharCounterConcretChainElement::writeResults() const
{
	// printing the length of string from MyDataObject class
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

