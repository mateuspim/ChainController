/* 
 * File:   StartChain.cpp
 * Author: andre
 *
 * Created on June 9, 2016, 3:45 PM
 */

#include <cstdlib>
#include <iostream>
#include <cstdlib>
#include <memory>
#include "Info.hpp"
#include "ChainController.hpp"

using namespace std;

int main(int argc, char** argv) {

	try {
		auto program = std::make_unique<ChainController>();
		auto info = std::make_unique<Info>();
		info->wellcome();
		program->start();
		info->goodbye();
	}
	catch (exception& ex) {
		cerr << "Problem: " << ex.what() << endl;
	}
    
    return (0);
}
