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
	
	printf("%d %c %f", s.a, s.b, s.c);
	return 0;
}
