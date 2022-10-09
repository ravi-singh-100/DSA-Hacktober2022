#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev;
	int data;
	struct node *next;
};
struct node *head;
void creating_a_node(){
	struct node *ptr;
	int n;
	ptr=(struct node *)malloc(sizeof(struct node));
	ptr->prev=NULL;
	ptr->data=45;
	ptr->next=NULL;
	head=ptr;
}
int main(){
	creating_a_node();
	printf("%d",head->data);
	
	
}
