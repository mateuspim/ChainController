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
	string buffer = value->getValue();
	if (shift > 0)
		rightrotate(buffer, abs(shift));
	else
		leftrotate(buffer, abs(shift));
	value->setValue(buffer);
}

void TranspoCriptoConcreteChainElement::leftrotate(string& s, int d)
{
	reverse(s.begin(), s.begin() + d);
	reverse(s.begin() + d, s.end());
	reverse(s.begin(), s.end());
}

// In-place rotates s towards right by d 
void TranspoCriptoConcreteChainElement::rightrotate(string & s, int d)
{
	leftrotate(s,s.length() - d);
}

void TranspoCriptoConcreteChainElement::readParameters()
{
	string buffer;
	std::cout << "\t\tWhat is the numbers of chars to be shiffted: ";
	getline(cin, buffer);
	shift = stoi(buffer);
	cout << "\t\tIt will be shifted ...: [" << abs(shift) << "] chars to the ";
	if (shift > 0) cout << "Right"; else cout << "Left";
	cout << endl;
}

