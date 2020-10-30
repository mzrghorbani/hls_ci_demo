#ifndef SORT_H_
#define SORT_H_

#include "sort_types.h"

class Sort {
public:
	Sort();
	~Sort();
	void produce(data_t a[N], data_t b[N]);
public:
	data_t ai[N];
};

#endif
