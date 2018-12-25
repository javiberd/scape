#ifndef SCAPE_SRC_MODEL_OBSERVABLE_H_
#define SCAPE_SRC_MODEL_OBSERVABLE_H_

#include "observer.h"

class Observable {
public:

	Observable() {}

	virtual ~Observable() {}

	virtual void notifyAll() = 0;

	virtual void addObserver() = 0;

};

#endif /* SCAPE_SRC_MODEL_OBSERVABLE_H_ */
