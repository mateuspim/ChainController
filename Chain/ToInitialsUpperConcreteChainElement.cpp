#include "ToInitialsUpperConcreteChainElement.hpp"

ToInitialsUpperConcreteChainElement::ToInitialsUpperConcreteChainElement()
{
	this->setNext(NULL);
}

ToInitialsUpperConcreteChainElement::~ToInitialsUpperConcreteChainElement()
{
	this->setNext(NULL);
}

string ToInitialsUpperConcreteChainElement::getName()
{
	return (this->name);
}

void ToInitialsUpperConcreteChainElement::internalProcessing(std::shared_ptr<MyDataObject> value)
{
	string buffer = value->getValue();
	bool isUpper = true;

	for (int count = 0; count < buffer.size(); count++)
	{
		if (buffer.at(count) == ' ') {
			isUpper = true;
			continue;
		}

		if (isUpper) {
			buffer.at(count) = toupper(buffer.at(count));
			isUpper = false;
		}
		else {
			buffer.at(count) = tolower(buffer.at(count));
		}

	}
	value->setValue(buffer);
}

