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

IntVector *int_vector_copy(const IntVector *v){
	IntVector *temp = int_vector_new(v->capacity);
	
	temp->capacity = v->capacity;
	temp->size = v->size;
	temp->data = temp->data;

	return temp;

}

void int_vector_free(IntVector *v){
	if (v){
	free(v->data);
	free(v);
	}
	
}

int int_vector_get_item(const IntVector *v, size_t index){
	if (v){
	if (v->capacity > index)
		return v->data[index];
	}
	return 0;
}

void int_vector_set_item(IntVector *v, size_t index, int item){
        if (v){
        if (v->capacity > index){
                v->data[index] = item;
        }
}
}

size_t int_vector_get_size(const IntVector *v){
        if (v)
	return v->size;

}

size_t int_vector_get_capacity(const IntVector *v){
	if (v)
	return v->capacity;
}

int int_vector_push_back(IntVector *v, int item){
	if (v){
	if (v->size == v->capacity){
		v->capacity = v->capacity*2;
		v->data = realloc(v->data, (sizeof(int)*v->capacity));
		}
	v->data[v->size] = item;
	v->size = v->size + 1;
	}
return 0;
}

void int_vector_pop_back(IntVector *v){
	if (v){
	if (v->size > 0){
	v->size = v->size - 1;
	}
	}
}
