#ifndef SRC_MODEL_OBSERVER_H_
#define SRC_MODEL_OBSERVER_H_

class Observer {
public:
	Observer() {}

	virtual ~Observer() {};

	virtual void update() = 0;

};
#endif /* SRC_MODEL_OBSERVER_H_ */
