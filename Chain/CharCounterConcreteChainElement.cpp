#include <iostream>
#include "CharCounterConcreteChainElement.hpp"

CharCounterConcreteChainElement::CharCounterConcreteChainElement()
{
	cout << "Added module: " << this->getName() << " to the chain";
	this->setNext(NULL);
}

CharCounterConcreteChainElement::~CharCounterConcreteChainElement()
{
	cout << "Deleted module: " << this->getName() << " from the chain" << endl;
	this->setNext(NULL);
}

void CharCounterConcreteChainElement::writeResults()
{
	// printing the length of string from MyDataObject class
	std::cout << "\t\tThe string: " << buffer << " has " << buffer.length() << " chars" << std::endl;
}

string CharCounterConcreteChainElement::getName()
{
	return (this->name);
}

void CharCounterConcreteChainElement::internalProcessing(std::shared_ptr<MyDataObject> value)
{
	buffer = value->getValue();
}

