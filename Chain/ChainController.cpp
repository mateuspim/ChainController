/* 
 * File:   ChainController.cpp
 * Author: andre
 * 
 * Created on June 9, 2016, 4:20 PM
 */

#include <iostream>
#include "ChainController.hpp"
#include "Info.hpp"
#include "Menu.hpp"
#include "ToLowerConcreteChainElement.hpp"
#include "ToUpperConcreteChainElement.hpp"
#include "ToReverseConcreteChainElement.hpp"
#include "ToOnlyUpperInitialsConcreteChainElement.hpp"
#include "XorCriptoConcreteChainElement.hpp"
#include "TranspoCriptoConcreteChainElement.hpp"
#include "CharCounterConcreteChainElement.hpp"

using namespace std;

ChainController::ChainController()
{
	chainUnits.clear();
	myData = nullptr;
}

ChainController::~ChainController()
{
	cout << "Exiting program" << endl;
}

void ChainController::start(void)
{
	// load the string to be processed
	loadData();
	// create the set of processing elements to the chain
	createElements();
	// start the chain
	startChain();
};

void ChainController::loadData()
{
	myData = std::make_shared<MyDataObject>(Info::getInstitution());
}

void ChainController::startChain()
{
	// verify if there is at least one element in the chain
	if (chainUnits.size() > 0)
	{
		// prepare the chain, linking the elements
		prepareChain();
		// process all elements in the chain
		processChain();
	}
	else
	{
		// no elements in the chain
		cout << "Nothing to do... empty chain!" << endl;
	};
}

void ChainController::createElements()
{
	/*	creating the menu to navigate through the options
	*	and allocating the given information in vector
	*	to process it later
	*/
	vector<string> options({ " Exit and Run"," Run Chain"," Alter String"
							," Lower String"," Upper String"," Only Upper Initials"
							," Reverse String"," XOR Crypto"," Transposition Crypto"
							," Count Chars","Reset The Chain"});
	
	int choice = -1;
	std::unique_ptr<Menu> menu = std::make_unique<Menu>("\tChain Reaction",options);
	string buffer;

	while (choice) {
		choice = menu->getEscolha();
		switch (choice) 
		{
		case 0: break;
		case 1: startChain(); break;
		case 2: cout << "String to be processed: " << myData->getValue() << "\n"
					 << "Enter new string: ";	getline(cin, buffer); 
				myData->setValue(buffer); break;
		case 3: chainUnits.push_back(std::make_shared< ToLowerConcreteChainElement >()); break;
		case 4: chainUnits.push_back(std::make_shared< ToUpperConcreteChainElement >()); break;
		case 5: chainUnits.push_back(std::make_shared< ToOnlyUpperInitialsConcreteChainElement >()); break;
		case 6: chainUnits.push_back(std::make_shared< ToReverseConcreteChainElement >()); break;
		case 7: chainUnits.push_back(std::make_shared< XorCriptoConcreteChainElement >()); break;
		case 8: chainUnits.push_back(std::make_shared< TranspoCriptoConcreteChainElement >()); break;
		case 9: chainUnits.push_back(std::make_shared< CharCounterConcreteChainElement>()); break;
		case 10: cout << "\nClearing the chain cache" << endl; chainUnits.clear(); 
				 cout << "Cache cleared" << endl; break;
		default: cout << "Invalid command!" << endl; //if called problem if other cases
		}
	}
}

void ChainController::prepareChain()
{
	if (chainUnits.size() > 1)
	{
		// set the next elements of chain 
		for (int count = 0; count < (chainUnits.size() - 1); count++)
		{
		(chainUnits.at(count))->setNext(chainUnits.at(count + 1).get());
		}
	}
}

void ChainController::processChain()
{
	// start processing the first value of the chain 
	cout << "Initial value ...: " << myData->getValue() << endl << endl;
	(chainUnits.at(0))->doProcessing(myData);
	cout << "\nFinal value .....: " << myData->getValue() << endl;
}
