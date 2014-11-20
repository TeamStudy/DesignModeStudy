/*
 * main.cpp
 *
 *  Created on: 2014-11-6
 *      Author: Administrator
 */

#include "Decorator.h"
#include <iostream>
using namespace std;
using namespace DesignMode;


int main(int argc, char* argv[]) {
	Component* com = new ConcreteComponent();
	Decorator* dec = new ConcreteDecorator(com);
	dec->Operation();
	delete dec;
	return 0;
}
