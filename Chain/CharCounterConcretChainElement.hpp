#ifndef CHARCOUNTERCONCRETECHAINELEMENT_HPP
	#define CHARCOUNTERCONCRETECHAINELEMENT_HPP

#include <string>
#include "AbstractChainElement.hpp"

class CharCounterConcretChainElement : public AbstractChainElement
	{
	private:
		const string name = "CharCounterConcreteChainElement";
		string buffer;
		void internalProcessing(std::shared_ptr<MyDataObject> value) override;
		virtual void writeResults() const;

	public:
		CharCounterConcretChainElement();
		virtual ~CharCounterConcretChainElement();
		string getName() override;
};

#endif 

