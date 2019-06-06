/* 
 * File:   StartChain.cpp
 * Author: andre
 *
 * Created on June 9, 2016, 3:45 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

#include <cstdlib>
#include <memory>
#include "Info.hpp"
#include "ChainController.hpp"

using namespace std;

int main(int argc, char** argv) {
	try {
		std::unique_ptr<ChainController> program; 
		program = std::make_unique<ChainController>();
		//ChainController* program = new ChainController();
		Info::wellcome();
		program->start();
		//delete program;
		//program = NULL;
		Info::goodbye();
	}
	catch (exception& ex) {
		cerr << "Problem: " << ex.what() << endl;
	}
    
    return (0);
}
