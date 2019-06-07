/* 
 * File:   XorCriptoConcreteChainElement.hpp
 * Author: andre
 *
 * Created on June 9, 2016, 5:50 PM
 */

#ifndef XORCRIPTOCONCRETECHAINELEMENT_HPP
	#define XORCRIPTOCONCRETECHAINELEMENT_HPP

#include <string>
#include "AbstractChainElement.hpp"

using namespace std;

class XorCriptoConcreteChainElement : public AbstractChainElement {
private:
    const string name = "XOR Cripto Concrete ChainElement";
    string       key = "";
    
    void internalProcessing(std::shared_ptr<MyDataObject>) override;
    void readParameters() override;

public:
    XorCriptoConcreteChainElement();
    virtual ~XorCriptoConcreteChainElement();
    string getName() override;
};

#endif /* XORCRIPTOCONCRETECHAINELEMENT_HPP */

