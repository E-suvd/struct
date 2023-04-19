#include <stdio.h>
struct test {
	int data;
	struct test *next;
};
int main() {
	struct test s[10];
	struct test *head;
	
	for(int i=0; i<10; i++) {
		s[i].data = i;
	}
	head = &s[0];
	for(int i=0; i<9; i++) {
		s[i].next = &s[i + 1];
	}
	s[9].next = NULL;

	struct test *ptr;
	ptr = head;
	while(ptr!= NULL) {
		printf(" %d", ptr -> data);
		ptr = ptr -> next;
	}
	return 0;
}



