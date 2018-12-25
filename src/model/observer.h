#ifndef SCAPE_SRC_MODEL_OBSERVER_H_
#define SCAPE_SRC_MODEL_OBSERVER_H_

class Observer {
public:
	Observer() {}

	virtual ~Observer() {};

	virtual void update() = 0;

};
#endif /* SCAPE_SRC_MODEL_OBSERVER_H_ */
