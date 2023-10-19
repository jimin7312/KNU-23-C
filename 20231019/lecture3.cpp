#include <stdio.h>
#include <stdlib.h>
typedef struct _NODE {
	int data;
	struct _NODE* next;
}NODE;
void print_list(NODE* head) {
	NODE* p=head->next;
	while (p != NULL) {
		printf("%d", p->data);
		p = p->next;
	}
}
void insert_node(NODE*head, int data) {
	NODE* p = head;
	while (p->next != NULL) {
		p = p->next;
	}
	NODE* new_node = (NODE*)malloc(sizeof(NODE));
	new_node->data = data;
	new_node->next = p->next;
	p->next = new_node;
}
void delete_node_last(NODE* head)
{
	NODE* p = head->next;
	NODE* p_prev = head;
	while (p_prev->NULL) {
		p_prev = p;
		p = p->next;
	}
}
int main()
{
	NODE* head = (NODE*)malloc(sizeof(NODE));
	head->next = NULL;
	//(*head).next=NULL;
	NODE*n1 = (NODE*)malloc(sizeof(NODE));
	n1->data = 1;
	n1->next = head->next;
	head->next = n1;

	NODE* n2 = (NODE*)malloc(sizeof(NODE));
	n2->data = 1;
	n2->next = head->next;
	head->next = n2;

	NODE* n3 = (NODE*)malloc(sizeof(NODE));
	n3->data = 1;
	n3->next = head->next;
	head->next = n3;
	
	insert_node(head, 4);

	print_list(head);
;
	return 0;
}