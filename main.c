#include <stdio.h>

int main() {
	// allocate memory for int pointer
	int *A;
	// point to null (i.e. mem address 0)
	A = 0;
	printf("A: %p\n", (void*)A);
	printf("A: %i\n", *A);
	// try to write to null,
	// segfault
	*A = 5;
	printf("A: %p\n", (void*)A);
	printf("A: %i\n", *A);
	return 0;
}
