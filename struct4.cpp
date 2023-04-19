#include <stdio.h>
#include <stdlib.h>
struct test {
	int a;
	char b;
	double c;
};

int main() {
	struct test *s_pointer = (struct test*)malloc(sizeof(struct test));
	s_pointer -> a = 1;
	s_pointer -> b = 'a';
	s_pointer -> c = 3.14;
	
	printf("%d %c %f", s_pointer -> a, s_pointer -> b, s_pointer -> c);
	return 0;
}
