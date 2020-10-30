#include "sort.h"

Sort::Sort() {}

Sort::~Sort() {}

void Sort::produce(data_t a[N], data_t b[N]) {

	int i, j, min, temp;

	for(i = 0; i < N; i++) {
		ai[i] = a[i];
	}

   for (i = 0; i < N-1; i++) {
	  min = i;
	  for (j = i+1; j < N; j++)
		  if (ai[j] > ai[min])
			  min = j;
	  	  temp = ai[i];
	  	  ai[i] = ai[min];
	  	  ai[min] = temp;
   }

	for(i = 0; i < N; i++) {
		b[i] = ai[i];
	}
}
