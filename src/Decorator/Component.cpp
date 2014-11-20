/*
 * Component.cpp
 *
 *  Created on: 2014-11-6
 *      Author: Administrator
 */

#include "Component.h"
#include <iostream>


namespace DesignMode {

Component::Component() {
	// TODO Auto-generated constructor stub

}

Component::~Component() {
	// TODO Auto-generated destructor stub
}

ConcreteComponent::ConcreteComponent() {
	// TODO Auto-generated constructor stub

}

ConcreteComponent::~ConcreteComponent() {
	// TODO Auto-generated destructor stub
}

void ConcreteComponent::Operation()
{
	std::cout<<"ConcreteComponent operation..."<<std::endl;
}

} /* namespace DesignMode */
