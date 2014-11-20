/*
 * Product.h
 *
 *  Created on: 2014-10-17
 *      Author: Administrator
 */

#ifndef PRODUCT_H_
#define PRODUCT_H_

namespace DesignMode {

class Product {
protected:
	Product(); //���ι��캯��
public:
	virtual ~Product() = 0;
};

class ConcreteProductA: public Product {
public:
	~ConcreteProductA();
	ConcreteProductA();
protected:
private:
};

class ConcreteProductB: public Product {
public:
	~ConcreteProductB();
	ConcreteProductB();
protected:
private:
};

} /* namespace DesignMode */
#endif /* PRODUCT_H_ */
