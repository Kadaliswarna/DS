#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev;
	int data;
	struct node *next;
};
typedef struct node Node;
Node *head=NULL;
Node *tail=NULL;
Node *create_new_node(int val)
{
	Node *newnode=(Node *)malloc(sizeof(Node));
	newnode->data=val;
	newnode->next=NULL;
	newnode->prev=NULL;
	return newnode;
}
void insert_from_head(int val){
	Node *newnode=create_new_node(val);
	if(head==NULL&&tail==NULL){
		head=newnode;
		tail=newnode;
	}
	else{
		head->prev=newnode;
		newnode->next=head;
		head=newnode;
	}
}
void insert_from_tail(int val){
	Node *newnode=create_new_node(val);
	if(head==NULL&&tail==NULL){
		head=newnode;
		tail=newnode;
	}
	else{
		tail->next=newnode;
		newnode->prev=tail;
		tail=newnode;
	}
}
void display_from_head()
{
	Node *temp=head;
	if(head==NULL){
		printf("double linked list is empty\n");
		return;
	}
	else{
		while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	    printf("\n");	
    }
}
void display_from_tail()
{
	Node *temp=tail;
	if(tail==NULL){
		printf("double linked list is empty\n");
		return;
	}
	else{
		while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->prev;
	}
	printf("\n");
		
	}
}

void del_at_head(){
	Node *temp=head;
	if(temp==NULL){
		printf("double linked list is empty\n");
		return;
	}	
	while(temp!=NULL && temp->prev==NULL){
		Node *del=temp;
		printf("%d \n",temp->data);
		free(del);
		temp=temp->next;
	}
	head=head->next;
	
}



int main(){
	int ch;
	while(1){
		printf("Enter\n1. Insert at head\n2. Insert at tail\n3. Display from head\n4.Display from tail\n5.delete head\nAny other to exit:\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			// insert at head
			int val;
			scanf("%d",&val);
			insert_from_head(val);
		}
		else if(ch==2)
		{
			//insert at tail
			int val;
			scanf("%d",&val);
			insert_from_tail(val);
		}
		else if(ch==3)
		{
			//Display from head
			display_from_head();
		}
		else if(ch==4)
		{
			//Display from tail
			display_from_tail();
		}
		else if(ch==5)
		{
			//delete head
			del_at_head();
		}
		else if(ch==6)
		{
			//Display from tail
			printf("Thank you\n");
			break;
		}
	}
			return 0;
}
