#include "ToReverseConcreteChainElement.hpp"

ToReverseConcreteChainElement::ToReverseConcreteChainElement()
	{
	this->setNext(NULL);
	}

ToReverseConcreteChainElement::~ToReverseConcreteChainElement()
	{
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

