#ifndef INTVECTOR
#define INTVECTOR

typedef struct{
	size_t size;
	size_t capacity;
	int *data;
} IntVector;

IntVector *int_vector_new(size_t initial_capacity);
IntVector *int_vector_copy(const IntVector *v);
void int_vector_free(IntVector *v);
int int_vector_get_item(const IntVector *v, size_t index);

#endif
