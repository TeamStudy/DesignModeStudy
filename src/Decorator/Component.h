/*
 * Component.h
 *
 *  Created on: 2014-11-6
 *      Author: Administrator
 */

#ifndef COMPONENT_H_
#define COMPONENT_H_

namespace DesignMode {

class Component {
protected:
	Component();
public:
	virtual ~Component();
	virtual void Operation() = 0;
};



class ConcreteComponent:public Component
{

public:
	ConcreteComponent();
	~ConcreteComponent();
	void Operation();
};




} /* namespace DesignMode */
#endif /* COMPONENT_H_ */
