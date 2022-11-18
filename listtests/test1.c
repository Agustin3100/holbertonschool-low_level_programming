#include <stdio.h>
#include <stdlib.h>
struct node{

	int a;
	int b;
	int c;

	struct node *link;
}node_t;

int main(){

	struct node *head;

	head = malloc(sizeof(struct node));

	head ->a = 45;

	printf("a value: [%d]\n", head->a);

	return 0;
}
