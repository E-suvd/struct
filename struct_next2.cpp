#include <stdio.h>
struct test {
	int data;
	struct test *next;
};

int main() {
	struct test s1, s2;
	s1.data = 1;
	s2.data = 2;
	s1.next = &s2;
	printf("%d %d", s1.data, s1.next -> data);
}
