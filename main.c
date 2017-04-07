#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "IntVector.h"

int main(){
	IntVector *m = int_vector_new(3);
	printf("%ld \n", m->capacity);

return 0;
}




