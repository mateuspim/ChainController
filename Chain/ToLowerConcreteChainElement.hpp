/* 
 * File:   toLowerConcreteChainElement.hpp
 * Author: andre
 *
 * Created on June 9, 2016, 4:34 PM
 */

#ifndef TOLOWERCONCRETECHAINELEMENT_HPP
	#define TOLOWERCONCRETECHAINELEMENT_HPP

#include <string>
#include "AbstractChainElement.hpp"

using namespace std;

class ToLowerConcreteChainElement : public AbstractChainElement {
private:
    const string name = "To Lower Concrete ChainElement";
    void internalProcessing(std::shared_ptr<MyDataObject>) override;

public:
    ToLowerConcreteChainElement();
    virtual ~ToLowerConcreteChainElement();
    string getName() override;
};

#endif /* TOLOWERCONCRETECHAINELEMENT_HPP */

