#ifndef TOONLYUPPERINITIALSCONCRETECHAINELEMENT_HPP
	#define TOONLYUPPERINITIALSCONCRETECHAINELEMENT_HPP

#include <string>
#include "AbstractChainElement.hpp"

class ToOnlyUpperInitialsConcreteChainElement : public AbstractChainElement
{
private:
	const string name = "To Only Upper Initials Concrete ChainElement";
	void internalProcessing(std::shared_ptr<MyDataObject> value) override;

public:
	ToOnlyUpperInitialsConcreteChainElement();
	virtual ~ToOnlyUpperInitialsConcreteChainElement();
	string getName() override;
};

#endif /* TOONLYUPPERINITIALSCONCRETECHAINELEMENT_HPP */

