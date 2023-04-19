#include <stdio.h>
struct test {
	int data;
	struct test *next;
};

int main() {
	struct test s1, s2, s3, s4;
	s1.data = 1;
	s2.data = 2;
	s3.data = 3;
	s4.data = 4;
	s1.next = &s2;
	s2.next = &s3;
	s3.next = &s4;
	printf("%d", s1.data);
	printf(" %d", s1.next -> data);
	printf(" %d", s2.next -> data);
	printf(" %d", s3.next -> data);
	
}
