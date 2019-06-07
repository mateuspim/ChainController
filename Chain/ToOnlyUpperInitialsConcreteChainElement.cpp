#include <iostream>
#include "ToOnlyUpperInitialsConcreteChainElement.hpp"
#include "ToLowerConcreteChainElement.hpp"

ToOnlyUpperInitialsConcreteChainElement::ToOnlyUpperInitialsConcreteChainElement()
{
	cout << "Added module: " << this->getName() << " to the chain";
	this->setNext(NULL);
}

ToOnlyUpperInitialsConcreteChainElement::~ToOnlyUpperInitialsConcreteChainElement()
{
	cout << "Deleted module: " << this->getName() << " from the chain" << endl;
	this->setNext(NULL);
}

string ToOnlyUpperInitialsConcreteChainElement::getName()
{
	return (this->name);
}

void ToOnlyUpperInitialsConcreteChainElement::internalProcessing(std::shared_ptr<MyDataObject> value)
{
	string buffer = value->getValue();

	/*	this method only uppers the initials 
	*	one way to do it is to declare a bool "isUpper" 
	*	set it to true - to upper the first char - 
	*	and search for empty spaces in the given string
	*	and set isUpper to true to upper the 
	*	next char from the string
	*/

	bool isUpper = true;

	for (int count = 0; count < buffer.size(); count++)
	{
		if (isUpper) {
			buffer.at(count) = toupper(buffer.at(count));
			isUpper = false;
		}
		else {
			buffer.at(count) = tolower(buffer.at(count));
		}

		if (buffer.at(count) == ' ') {
			isUpper = true;
		}
	}

	/*
	*	we need to find an empty space between words
	*	so we use the string method find(' ');
	*	and cycle trough the string until we reach the end
	
	char toFind = ' ';
	
	size_t found = 0;
	while (found < buffer.size())
	{
		if (found == 0)
			buffer.at(0) = toupper(buffer.at(0));
		else
			buffer.at(found + 1) = toupper(buffer.at(found + 1));

		found = buffer.find(toFind, found + 1);
		cout << found << endl;
	}
	*/
	value->setValue(buffer);

}


