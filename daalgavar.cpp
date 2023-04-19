#include<stdio.h>
struct test{
	int number;
	int english;
	int math;
	int ML;
	struct test *next;
};
int main(){
	struct test student [10];

	struct test *head;
	

	for(int i = 0;i<10;i++){
		student[i].number=i+1;
		student[i].english=i;
		student[i].math=i;
		student[i].ML=i;
		
	}
	
	head=&student [0];
	student[9].next=NULL;
	struct test *ptr=head;
	for(int i = 0 ; i<9; i++){
		student[i].next=&student[i+1];
	}
		while(ptr != NULL){
			scanf("%d",&ptr->english);
			printf("english score student number %d:%d\n",ptr->number,ptr->english);
			scanf("%d",&ptr->math);
			printf("math score student number %d:%d\n",ptr->number,ptr->math);
			scanf("%d",&ptr->ML);
			printf("mongol hel score student number %d:%d\n",ptr->number,ptr->ML);
			ptr=ptr->next;

		}
	
}
