#include <iostream>
#include <cmath>
#include "TranspoCriptoConcreteChainElement.hpp"

TranspoCriptoConcreteChainElement::TranspoCriptoConcreteChainElement()
{
	cout << "Added module: " << this->getName() << " to the chain";
	this->setNext(NULL);
}

TranspoCriptoConcreteChainElement::~TranspoCriptoConcreteChainElement()
{
	cout << "Deleted module: " << this->getName() << " from the chain" << endl;
	this->setNext(NULL);
}

string TranspoCriptoConcreteChainElement::getName()
{
	return (this->name);
}

void TranspoCriptoConcreteChainElement::internalProcessing(std::shared_ptr<MyDataObject> value)
{
	/* adding to each char in given string the shift element 
	* to get another char from ASCII table
	*/
	string buffer = value->getValue();
	for (int count = 0; count < buffer.size(); count++)
	{
		buffer.at(count) = buffer.at(count) + shift;
	}
	value->setValue(buffer);
}

void TranspoCriptoConcreteChainElement::readParameters()
{
	/*	reading the parameters from user 
	*	using a string as buffer to avoid '\n' in cin
	*/
	string buffer;
	std::cout << "\t\tWhat is the numbers of chars to be shiffted: ";
	getline(cin, buffer);
	shift = stoi(buffer);
	cout << "\t\tIt will be shifted ...: [" << abs(shift) << "] to each char  ";
	cout << endl;
}

