#include<stdio.h>
#include<stdlib.h>
int top=-1;
typedef struct stack{
	int size;
	int data;
	struct stack* next;
}node;
node*head=NULL;

void push(){
	node* newnode=(node*)malloc(sizeof(node));
	printf("Enter the data:\n");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(head==NULL){
		head=newnode;
	}else{
		node* temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
		top++;
	}
}

void pop(){
	if(top==-1){
		printf("Nothing to pop\n");
	}else if(top>0){
		node* temp=head;
		while(temp->next->next!=NULL){
			temp=temp->next;
		}
		printf("The element which is pop is:%d",temp->next->data);
		free(temp->next);
		temp->next=NULL;
		top--;
	}else{
		head=NULL;
	}
}
void peak(){
	if(top==-1){
		printf("Stack is empty");
	}else{
		node* temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		printf("\nThe top element of the stack is :%d\n",temp->data);
		top--;
	}
}
void main(){
	int size;
	printf("Enter the size of stack:\n");
	scanf("%d",&size);
	int node,i;
	printf("how many nodes do you want\n");
	scanf("%d",&node);
	for(i=0;i<node;i++){
		if(i>=size){
			printf("stack underflow\n");
			break;
		}else{
			push();
		}
	}
	pop();
	peak();
	pop();
	peak();
}
