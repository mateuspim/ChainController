/* 
 * File:   AbstractChainElement.cpp
 * Author: andre
 * 
 * Created on June 9, 2016, 4:09 PM
 */

#include "AbstractChainElement.hpp"
#include <cstdlib>
#include <iostream>

using namespace std;

AbstractChainElement::AbstractChainElement()
{
	nextElement = NULL;
}

AbstractChainElement::~AbstractChainElement()
{
	nextElement = NULL;
}

void AbstractChainElement::setNext(AbstractChainElement* next)
{
	this->nextElement = next;
}

AbstractChainElement* AbstractChainElement::getNext()
{
	return(this->nextElement);
}

void AbstractChainElement::doProcessing(std::shared_ptr<MyDataObject> value)
{
	if(value != NULL)
	{
		cout << "\t" << this->getName() << ":" << endl;
		
		// read Parameters from user if class overwrites it else do nothing
		this->readParameters();
      
		cout << "\t\tFrom ..: " << value->getValue() << endl;
		internalProcessing(value);
		cout << "\t\tTo ....: " << value->getValue() << endl;
		
		// print results to user if class overwrites it else do nothing
		this->writeResults();

		// process the next element of the chain if not null
		if(this->nextElement != NULL)
		{
			nextElement->doProcessing(value);
		}
	}
}

void AbstractChainElement::writeResults()
{
	// do nothing. May be overrided only if it was necessary.
}

void AbstractChainElement::readParameters()
{
   // do nothing. May be overrided only if it was necessary.
}
