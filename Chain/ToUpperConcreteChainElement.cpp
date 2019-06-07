/* 
 * File:   toUpperConcreteChainElement.cpp
 * Author: andre
 * 
 * Created on June 9, 2016, 5:17 PM
 */

#include <cctype>
#include <iostream>
#include "ToUpperConcreteChainElement.hpp"

ToUpperConcreteChainElement::ToUpperConcreteChainElement()
{
	cout << "Added module: " << this->getName() << " to the chain";
	this->setNext(NULL);
}

ToUpperConcreteChainElement::~ToUpperConcreteChainElement()
{
	cout << "Deleted module: " << this->getName() << " from the chain" << endl;
	this->setNext(NULL);
}

string ToUpperConcreteChainElement::getName()
{
	return (this->name);
}

void ToUpperConcreteChainElement::internalProcessing(std::shared_ptr<MyDataObject> value)
{
	// uppercase all the chars in given string
	string buffer = value->getValue();
   
	for(int count = 0; count < buffer.size(); count++)
	{
		buffer.at(count) = toupper(buffer.at(count));
	}
	value->setValue(buffer);
}
