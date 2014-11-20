/*
 * AbstractClass.cpp
 *
 *  Created on: 2014-10-17
 *      Author: Administrator
 */

#include "AbstractClass.h"

#include <iostream>
using namespace std;

namespace DesignMode {

AbstractClass::AbstractClass() {
	// TODO Auto-generated constructor stub

}

AbstractClass::~AbstractClass() {
	// TODO Auto-generated destructor stub
}

void AbstractClass::TemplateMethod() {
	this->PrimitiveOperation1();
	this->PrimitiveOperation2();
}

ConcreteClass1::ConcreteClass1() {
}

ConcreteClass1::~ConcreteClass1() {
}

void ConcreteClass1::PrimitiveOperation1() {
	cout << "ConcreteClass1...PrimitiveOperation1" << endl;
}

void ConcreteClass1::PrimitiveOperation2() {
	cout << "ConcreteClass1...PrimitiveOperation2" << endl;
}

ConcreteClass2::ConcreteClass2() {
}

ConcreteClass2::~ConcreteClass2() {
}

void ConcreteClass2::PrimitiveOperation1() {
	cout << "ConcreteClass2...PrimitiveOperation1" << endl;
}

void ConcreteClass2::PrimitiveOperation2() {
	cout << "ConcreteClass2...PrimitiveOperation2" << endl;
}

}
/* namespace DesignMode */
