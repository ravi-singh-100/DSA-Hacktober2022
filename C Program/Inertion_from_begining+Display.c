#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev;
	int data;
	struct node *next;
};
struct node *head;
void insert_at_begining(){
	struct node *temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
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
	while(ptr->prev != NULL){
		ptr=ptr->prev;
	}
	temp->next=ptr;
	ptr->prev=temp;
	temp->prev=NULL;
}
head=temp;
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
		printf("\n1.Insert from begining.\n");
		printf("\n2.Display\n");
		printf("\nChoose option.\n");
		scanf("%d",&n);
		switch(n){
	case 1: insert_at_begining();
	break;
	case 2: display();
	break;
}
}
}
