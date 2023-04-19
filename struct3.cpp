#include <stdio.h>
struct test {
	int a;
	char b;
	double c;
};

int main() {
	struct test s;
	s.a = 1;
	s.b = 'a';
	s.c = 3.14;
	
	struct test *s_pointer = &s;
	printf("%d %c %f", s.a, s.b, s.c);
	printf(" %d %c %f", (*s_pointer).a, (*s_pointer).b, (*s_pointer).c);
	printf("\n%d %c %f", s_pointer->a, s_pointer->b, s_pointer->c);
	return 0;
}
