#include <iostream>
#include "ToReverseConcreteChainElement.hpp"

ToReverseConcreteChainElement::ToReverseConcreteChainElement()
{
	cout << "Added module: " << this->getName() << " to the chain";
	this->setNext(NULL);
}

ToReverseConcreteChainElement::~ToReverseConcreteChainElement()
{
	cout << "Deleted module: " << this->getName() << " from the chain" << endl;
	this->setNext(NULL);
}

string ToReverseConcreteChainElement::getName()
{
	return (this->name);
}

void ToReverseConcreteChainElement::internalProcessing(std::shared_ptr<MyDataObject> value)
{
	string buffer = value->getValue();
	reverse(buffer.begin(), buffer.end());
	value->setValue(buffer);
}

