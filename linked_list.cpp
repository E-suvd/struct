#include <stdio.h>
#include <stdlib.h>
int main() {
	int *a_pointer1 = (int*)malloc(sizeof(int));
	*a_pointer1 = 1;
	
	printf("%d", *a_pointer1);
	printf("\n%X", a_pointer1);
	
	int *a_pointer2;
	a_pointer2 = a_pointer1;
	
	printf("\n%X", a_pointer2);
	printf("\n%d", *a_pointer2);
	
	return 0;
}
