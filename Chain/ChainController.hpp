/* 
 * File:   ChainController.hpp
 * Author: andre
 *
 * Created on June 9, 2016, 4:20 PM
 */

#ifndef CHAINCONTROLLER_HPP
	#define CHAINCONTROLLER_HPP

#include "AbstractChainElement.hpp"
#include "MyDataObject.hpp"
#include <vector>
#include <memory>

using namespace std;

class ChainController 
{
private:
	
	vector<std::shared_ptr<AbstractChainElement>> chainUnits;
	std::shared_ptr<MyDataObject> myData;
   
public:
    ChainController();
	~ChainController();

	void start();
    void loadData();
	void startChain();
    void processChain();
    void prepareChain();
    void createElements();

};

#endif /* CHAINCONTROLLER_HPP */

