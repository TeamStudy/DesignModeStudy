/*
 * Decorator.cpp
 *
 *  Created on: 2014-11-6
 *      Author: Administrator
 */

#include "Decorator.h"
#include <iostream>


namespace DesignMode {

Decorator::Decorator(Component* com) {
	this->_com = com;
}
Decorator::~Decorator() {
	delete _com;
}


ConcreteDecorator::ConcreteDecorator(Component* com) :
		Decorator(com) {
}
ConcreteDecorator::~ConcreteDecorator() {
}
void ConcreteDecorator::AddedBehavior() {
	std::cout << "ConcreteDecorator::AddedBehacior...." << std::endl;
}
void ConcreteDecorator::Operation() {
	_com->Operation();
	this->AddedBehavior();
}

} /* namespace DesignMode */
