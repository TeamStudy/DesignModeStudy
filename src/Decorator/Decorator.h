/*
 * Decorator.h
 *
 *  Created on: 2014-11-6
 *      Author: Administrator
 */

#ifndef DECORATOR_H_
#define DECORATOR_H_

#include "Component.h"

namespace DesignMode {

class Decorator {
public:
	Decorator(Component* com);
	virtual ~Decorator();
	virtual void Operation() = 0;

protected:
	Component* _com;
};

class ConcreteDecorator: public Decorator {
public:
	ConcreteDecorator(Component* com);
	~ConcreteDecorator();
	void Operation();
	void AddedBehavior();

};
} /* namespace DesignMode */
#endif /* DECORATOR_H_ */
