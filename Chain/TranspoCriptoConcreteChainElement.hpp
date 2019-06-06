#ifndef TRANSPOCRIPTOCONCRETECHAINELEMENT_HPP
	#define TRANSPOCRIPTOCONCRETECHAINELEMENT_HPP

#include <string>
#include "AbstractChainElement.hpp"

class TranspoCriptoConcreteChainElement : public AbstractChainElement
	{
	private:
		const string name = "TranspositionCriptoConcreteChainElement";
		void internalProcessing(std::shared_ptr<MyDataObject> value) override;
		virtual void readParameters();
		int shift = NULL;

		void leftrotate(string& s, int d);
		void rightrotate(string& s, int d);

	public:
		TranspoCriptoConcreteChainElement();
		virtual ~TranspoCriptoConcreteChainElement();
		string getName() override;
	};

#endif 

