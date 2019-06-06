#ifndef TOREVERSECONCRETECHAINELEMENT_HPP
	#define TOREVERSECONCRETECHAINELEMENT_HPP

#include <string>
#include "AbstractChainElement.hpp"

class ToReverseConcreteChainElement : public AbstractChainElement
{
private:
	const string name = "ToReverseConcreteChainElement";
	void internalProcessing(std::shared_ptr<MyDataObject> value) override;

public:
	ToReverseConcreteChainElement();
	virtual ~ToReverseConcreteChainElement();
	string getName() override;
};

#endif /* TOREVERSECONCRETECHAINELEMENT_HPP */

