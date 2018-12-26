#ifndef SCAPE_SRC_MODEL_OBSERVABLE_H_
#define SCAPE_SRC_MODEL_OBSERVABLE_H_

#include "observer.h"
#include <memory>

class Observable {

public:
	Observable() {}

	virtual ~Observable() {}

	virtual void notifyAll() = 0;

	virtual void addObserver(std::shared_ptr<Observer> observer) = 0;

};

#endif /* SCAPE_SRC_MODEL_OBSERVABLE_H_ */
