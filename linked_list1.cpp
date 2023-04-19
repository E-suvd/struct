#include <stdio.h>
int main() {
	int a = 1;
	int *a_pointer;
	a_pointer = &a;
	
	printf("%d %X\n", a, &a);
	printf("%d %X\n", *a_pointer, a_pointer);
	printf("%X\n", &a_pointer);
	return 0;
}
