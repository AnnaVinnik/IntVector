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

	size_t cap = int_vector_get_capacity(v);
	printf("capacity: %ld \n", cap);
	
	int_vector_push_back(v, 3);
	printf("push size: %ld capacity: %ld elem:  %d \n", v->size, v->capacity, int_vector_get_item(v, 0));
	
	int_vector_push_back(v, 6);
	printf("push size: %ld capacity: %ld elem:  %d \n", v->size, v->capacity, v->data[1]);

	int_vector_push_back(v, 3);
	printf("push size: %ld capacity: %ld elem:  %d \n", v->size, v->capacity, v->data[v->size-1]);

	int_vector_push_back(v, 1);
	printf("push size: %ld capacity: %ld elem:  %d \n", v->size, v->capacity, v->data[v->size-1]);
	
	int_vector_pop_back(v);
	printf("pop size: %ld capacity: %ld elem:  %d \n", v->size, v->capacity, v->data[v->size-1]);	

	int_vector_shrink_to_fit(v);
	printf("pop size: %ld capacity: %ld elem:  %d \n", v->size, v->capacity, v->data[v->size-1]);	


return 0;
}




