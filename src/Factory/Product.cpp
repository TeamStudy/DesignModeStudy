/*
 * Product.cpp
 *
 *  Created on: 2014-10-17
 *      Author: Administrator
 */

#include "Product.h"
#include<iostream>
using namespace std;


namespace DesignMode {

Product::Product() {
	cout << "Product Construct" << endl;
}
Product::~Product() {
	cout << "Product Destruct" << endl;
}

ConcreteProductA::ConcreteProductA() {
	cout << "ConcreteProductA Construct" << endl;
}
ConcreteProductA::~ConcreteProductA() {
	cout << "ConcreteProductA Destruct" << endl;
}

ConcreteProductB::ConcreteProductB() {
	cout << "ConcreteProductB Construct" << endl;
}
ConcreteProductB::~ConcreteProductB() {
	cout << "ConcreteProductB Destruct" << endl;
}

}/* namespace DesignMode */
