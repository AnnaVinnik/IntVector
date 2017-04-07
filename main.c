#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "IntVector.h"

int main(){
	IntVector *m = int_vector_new(3);
	printf("m: %ld \n", m->capacity);

	IntVector *v = int_vector_copy(m);
	printf("v: %ld \n", v->capacity);

	int_vector_free(m);

return 0;
}




