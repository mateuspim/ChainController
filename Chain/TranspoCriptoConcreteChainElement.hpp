#ifndef TRANSPOCRIPTOCONCRETECHAINELEMENT_HPP
	#define TRANSPOCRIPTOCONCRETECHAINELEMENT_HPP

#include <string>
#include "AbstractChainElement.hpp"

class TranspoCriptoConcreteChainElement : public AbstractChainElement
{
private:
	const string name = "TranspositionCriptoConcreteChainElement";
	int shift = NULL;

	void internalProcessing(std::shared_ptr<MyDataObject> value) override;
	virtual void readParameters();
	
	void leftrotate(string& s, int d);
	void rightrotate(string& s, int d);

public:
	TranspoCriptoConcreteChainElement();
	virtual ~TranspoCriptoConcreteChainElement();
	string getName() override;
};

#endif /* TRANSPOCRIPTOCONCRETECHAINELEMENT_HPP */

