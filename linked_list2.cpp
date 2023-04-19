#include <stdio.h>
#include <stdlib.h>
int main() {
	int *a_pointer = (int*)malloc(sizeof(int));
	*a_pointer = 1;
	
	printf("%d", *a_pointer);
	printf("\n%X", a_pointer);
	
	return 0;
}
