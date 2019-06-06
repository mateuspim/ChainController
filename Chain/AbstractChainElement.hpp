/* 
 * File:   AbstractChainElement.hpp
 * Author: andre
 *
 * Created on June 9, 2016, 4:09 PM
 */

#ifndef ABSTRACTCHAINELEMENT_HPP
	#define ABSTRACTCHAINELEMENT_HPP

#include <string>
#include <memory>

#include "MyDataObject.hpp"
using namespace std;

class AbstractChainElement 
{
private:
    AbstractChainElement * nextElement;
    virtual void internalProcessing(std::shared_ptr<MyDataObject>) = 0;
    virtual void readParameters();
	virtual void writeResults() const;
    
public:
    AbstractChainElement();
    virtual ~AbstractChainElement();
    virtual void setNext(AbstractChainElement * next);
    virtual AbstractChainElement * getNext(void);
    
    virtual void doProcessing(std::shared_ptr<MyDataObject>);
    virtual string getName(void) = 0;
};

#endif /* ABSTRACTCHAINELEMENT_HPP */

