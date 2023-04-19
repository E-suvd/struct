#include <stdio.h>
struct test {
	int data;
	struct test *next;
};

int main() {
	struct test s1, s2;
	struct test *head;
	s1.data = 1;
	s2.data = 2;
	head = &s1;
	s1.next = &s2;
	
	printf("%d" , head -> data);
	printf(" %d", s1.next -> data);
}

