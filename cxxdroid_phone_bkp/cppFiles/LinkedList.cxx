#include<stdio.h>
#include<stdlib.h>

struct node{
	 	int data;
	 	struct node *link;
	 	};
int newnode(int elem){
	struct node *Newnode = (struct node *)malloc(sizeof(struct node));
	Newnode ->data = elem;
	Newnode ->link = NULL;
	//current -> link = Newnode; 
	printf("%d  -> ",Newnode->data);
	};

int main(){
	 struct node *head=NULL;
	 head = (struct node *) malloc(sizeof(struct node));
	 head -> data = 1;
	 head -> link = NULL;
	 printf("%d -> ",head->data);
	 
	 struct node *current = (struct node *)malloc(sizeof(struct node));
	 current ->data = 2;
	 current ->link = NULL;
	 head -> link = current ;
	 printf("%d  -> ",current->data);
	 newnode(3);
	 newnode(4);
	 newnode(5);
	 struct node *temp = (struct node *)malloc(sizeof(struct node *));
	 temp = head; 
	 printf("\nThe element in the linked list are : ");
	 while (temp == NULL){
	 	printf("%d->",temp->data);
	 	temp  = temp->link;
	 	}
	 	
 	return 0;
	}