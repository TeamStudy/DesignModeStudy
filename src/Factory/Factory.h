/*
 * Factory.h
 *
 *  Created on: 2014-10-17
 *      Author: Administrator
 */

#ifndef FACTORY_H_
#define FACTORY_H_

namespace DesignMode {

class Product;

class Factory {
protected:
	Factory();
public:
	virtual ~Factory();
	virtual Product* CreateProduct(char lx) = 0;
};

class ConcreteFactory: public Factory {
public:
	~ConcreteFactory();
	ConcreteFactory();
	Product* CreateProduct(char lx);
protected:
private:
};

} /* namespace DesignMode */
#endif /* FACTORY_H_ */
