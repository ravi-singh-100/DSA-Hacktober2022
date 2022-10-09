#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev;
	int data;
	struct node *next;
};
struct node *head;
void insert_at_end(){
	struct node *temp,*ptr;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->prev=NULL;
	printf("\nEnter data to insert:\n");
	scanf("%d",&temp->data);
	printf("\nYou inserted:%d\n",temp->data);
	temp->next=NULL;
	if(head==NULL){
		head=temp;
	}
	else{
	ptr=head;
	while(ptr->next != NULL){
		ptr=ptr->next;
	}
	ptr->next=temp;
	temp->prev=ptr;
	temp->next=NULL;
}
}
void display(){
	struct node *ptr;
	if(head==NULL){
		printf("Empty linked list.");
	}
	else{
           ptr=head;
		   while(ptr !=NULL){
		   	printf("%d ",ptr->data);
		   	ptr=ptr->next;
		   }		
	}
}
int main(){
	while(1){
		int n;
		printf("\n1.Insert from End.\n");
		printf("\n2.Display\n");
		printf("\nChoose option.\n");
		scanf("%d",&n);
		switch(n){
	case 1: insert_at_end();
	break;
	case 2: display();
	break;
}
}
}
