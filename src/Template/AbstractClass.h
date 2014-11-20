/*
 * AbstractClass.h
 *
 *  Created on: 2014-10-17
 *      Author: Administrator
 */

#ifndef ABSTRACTCLASS_H_
#define ABSTRACTCLASS_H_

namespace DesignMode {

class AbstractClass {
public:
	virtual ~AbstractClass();
	void TemplateMethod();
protected:
	AbstractClass();
	virtual void PrimitiveOperation1() = 0;
	virtual void PrimitiveOperation2() = 0;
};


class ConcreteClass1: public AbstractClass {
public:
	ConcreteClass1();
	~ConcreteClass1();
protected:
	void PrimitiveOperation1();
	void PrimitiveOperation2();
private:
};


class ConcreteClass2: public AbstractClass {
public:
	ConcreteClass2();
	~ConcreteClass2();
protected:
	void PrimitiveOperation1();
	void PrimitiveOperation2();
private:
};


} /* namespace DesignMode */
#endif /* ABSTRACTCLASS_H_ */
