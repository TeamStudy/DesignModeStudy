/*
 * Factory.cpp
 *
 *  Created on: 2014-10-17
 *      Author: Administrator
 */

#include "Factory.h"
#include "Product.h"
#include <iostream>
using namespace std;

namespace DesignMode {

Factory::Factory() {
	cout << "Factory Construct" << endl;
}
Factory::~Factory() {
	cout << "Factory Destruct" << endl;
}
ConcreteFactory::ConcreteFactory() {
	cout << "ConcreteFactory Construct" << endl;
}
ConcreteFactory::~ConcreteFactory() {
	cout << "ConcreteFactory Destruct" << endl;
}
Product* ConcreteFactory::CreateProduct(char lx) {
	if(lx =='A')
		return new ConcreteProductA();
	else if(lx =='B')
		return new ConcreteProductB();
	else
		cout << "this is no product" << lx << endl;
}

} /* namespace DesignMode */
