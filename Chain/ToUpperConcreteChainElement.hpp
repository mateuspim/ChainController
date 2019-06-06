/* 
 * File:   toUpperConcreteChainElement.hpp
 * Author: andre
 *
 * Created on June 9, 2016, 5:17 PM
 */

#ifndef TOUPPERCONCRETECHAINELEMENT_HPP
	#define TOUPPERCONCRETECHAINELEMENT_HPP

#include "AbstractChainElement.hpp"
#include <string>

using namespace std;

class ToUpperConcreteChainElement : public AbstractChainElement {
private:
    const string name = "ToUpperConcreteChainElement";
    void internalProcessing(std::shared_ptr<MyDataObject> value) override;

public:
    ToUpperConcreteChainElement();
    virtual ~ToUpperConcreteChainElement();
    string getName() override;
};

#endif /* TOUPPERCONCRETECHAINELEMENT_HPP */

