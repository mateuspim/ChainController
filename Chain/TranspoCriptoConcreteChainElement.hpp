#ifndef TRANSPOCRIPTOCONCRETECHAINELEMENT_HPP
	#define TRANSPOCRIPTOCONCRETECHAINELEMENT_HPP

#include <string>
#include "AbstractChainElement.hpp"

class TranspoCriptoConcreteChainElement : public AbstractChainElement
{
private:
	const string name = "Transposition Cripto Concrete ChainElement";
	int shift = NULL;

	void internalProcessing(std::shared_ptr<MyDataObject> value) override;
	virtual void readParameters();
	
public:
	TranspoCriptoConcreteChainElement();
	virtual ~TranspoCriptoConcreteChainElement();
	string getName() override;
};

#endif /* TRANSPOCRIPTOCONCRETECHAINELEMENT_HPP */

