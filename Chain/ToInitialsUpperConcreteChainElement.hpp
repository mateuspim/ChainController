#ifndef TOINITIALSUPPERCONCRETECHAINELEMENT_HPP
	#define TOINITIALSUPPERCONCRETECHAINELEMENT_HPP

#include <string>
#include "AbstractChainElement.hpp"

class ToInitialsUpperConcreteChainElement : public AbstractChainElement
{
private:
	const string name = "ToOnlyInitialsUpperConcreteChainElement";
	void internalProcessing(std::shared_ptr<MyDataObject> value) override;

public:
	ToInitialsUpperConcreteChainElement();
	virtual ~ToInitialsUpperConcreteChainElement();
	string getName() override;
};

#endif /* TOINITIALSUPPERCONCRETECHAINELEMENT_HPP */

