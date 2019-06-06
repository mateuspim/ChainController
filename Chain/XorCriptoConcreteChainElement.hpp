/* 
 * File:   XorCriptoConcreteChainElement.hpp
 * Author: andre
 *
 * Created on June 9, 2016, 5:50 PM
 */

#ifndef XORCRIPTOCONCRETECHAINELEMENT_HPP
	#define XORCRIPTOCONCRETECHAINELEMENT_HPP

#include "AbstractChainElement.hpp"
#include <string>

using namespace std;

class XorCriptoConcreteChainElement : public AbstractChainElement {
private:
    const string name = "XorCriptoConcreteChainElement";
    string       key = "";
    
    void internalProcessing(std::shared_ptr<MyDataObject>) override;
    void readParameters() override;

public:
    XorCriptoConcreteChainElement();
    virtual ~XorCriptoConcreteChainElement();
    string getName() override;
};

#endif /* XORCRIPTOCONCRETECHAINELEMENT_HPP */

