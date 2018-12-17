#ifndef SRC_MODEL_OBSERVABLE_H_
#define SRC_MODEL_OBSERVABLE_H_

#include "observer.h"

class Observable {
public:

	Observable() {}

	virtual ~Observable() {}

	virtual void notifyAll() = 0;

	virtual void addObserver() = 0;

};

#endif /* SRC_MODEL_OBSERVABLE_H_ */
