#ifndef CHARCOUNTERCONCRETECHAINELEMENT_HPP
	#define CHARCOUNTERCONCRETECHAINELEMENT_HPP

#include <string>
#include "AbstractChainElement.hpp"

class CharCounterConcreteChainElement : public AbstractChainElement
{
private:
	const string name = "CharCounterConcreteChainElement";
	string buffer;
	void internalProcessing(std::shared_ptr<MyDataObject> value) override;
	void writeResults() override;

public:
	CharCounterConcreteChainElement();
	virtual ~CharCounterConcreteChainElement();
	string getName() override;
};

#endif 

