/* 
 * File:   toLowerConcreteChainElement.cpp
 * Author: andre
 * 
 * Created on June 9, 2016, 4:34 PM
 */

#include <cctype>
#include <iostream>
#include "ToLowerConcreteChainElement.hpp"

ToLowerConcreteChainElement::ToLowerConcreteChainElement()
{
	cout << "Added module: " << this->getName() << " to the chain";
	this->setNext(NULL);
}

ToLowerConcreteChainElement::~ToLowerConcreteChainElement()
{
	this->setNext(NULL);
	cout << "Deleted module: " << this->getName() << " from the chain" << endl;
}

string ToLowerConcreteChainElement::getName()
{
	return (this->name);
}

void ToLowerConcreteChainElement::internalProcessing(std::shared_ptr<MyDataObject> value)
{
	string buffer = value->getValue();
   
	for(int count = 0; count < buffer.size(); count++)
	{
		buffer.at(count) = tolower(buffer.at(count));
	}
	value->setValue(buffer);
}
