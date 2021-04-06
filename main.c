#include <stdio.h>

int main() {
	// allocate memory for int pointer
	int *x;
	// point to null (i.e. mem address 0)
	x = 0;
	printf("x: %p\n", (void*)x);
	printf("x: %i\n", *x);
	// try to write to null,
	// segfault
	*x = 5;
	printf("x: %p\n", (void*)x);
	printf("x: %i\n", *x);
	return 0;
}
