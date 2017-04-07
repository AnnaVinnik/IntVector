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
	
        int_vector_set_item(v, 2, 5);

        int two = int_vector_get_item(v, 2);
        printf("two: %d \n", two);

	size_t size = int_vector_get_size(v);
	printf("size: %ld \n", size);

return 0;
}




