#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "IntVector.h"

IntVector *int_vector_new(size_t initial_capacity) {
	IntVector *temp = malloc(sizeof(IntVector));

	if (temp == NULL)
		return NULL;
	temp->data = malloc(sizeof(int)*initial_capacity);

	if (temp->data == NULL)
		return NULL;

	temp->capacity = initial_capacity;
	temp->size = 0;

return temp;
}
