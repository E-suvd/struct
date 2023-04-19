#include <stdio.h>
struct test {
	int data;
	struct test *next;
};

int main() {
	struct test s1;
	s1.data = 1;
	struct test s2;
	s2.data = 2;
	
	printf("%d", s1.data);
	printf("\n%d", s2.data);
	s1.next = &s2;
}
