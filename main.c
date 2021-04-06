#include <stdio.h>

int main() {
	// allocate memory for int pointer
	int *z;
	// point to null (i.e. mem address 0)
	z = 0;
	printf("z: %p\n", (void*)z);
	printf("z: %i\n", *z);
	// try to write to null,
	// segfault
	*z = 5;
	printf("z: %p\n", (void*)z);
	printf("z: %i\n", *z);
	return 0;
}
