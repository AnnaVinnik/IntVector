#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "IntVector.h"

int main(){
	IntVector *m = int_vector_new(3);
	printf("%ld m: \n", m->capacity);
	printf("%d m: \n", m->data);

	IntVector *v = int_vector_copy(m);
	printf("%ld v: \n", v->capacity);
	printf("%d v: \n", v->data);
return 0;
}




