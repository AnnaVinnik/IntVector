#ifndef INTVECTOR
#define INTVECTOR

typedef struct{
	size_t size;
	size_t capacity;
	int *data;
} IntVector;

IntVector *int_vector_new(size_t initial_capacity);


#endif
