#include<stdio.h>
#include<stdlib.h>
int top=-1;
int size=0;
int i=0;
struct movie{
	char name[20];
	int pcount;
	float price;
	struct movie* next;
};

struct movie* head=NULL;
struct movie obj[3];
void push(){
		for(i=0;i<size;i++){
		printf("Enter the name of movie\n");
		scanf("%s",&obj[i].name);
		printf("Enter the number of people for the movie\n");
		scanf("%d",&obj[i].pcount);
		printf("Enter the price of ticket\n");
		scanf("%f",&obj[i].price);
		obj[i].next=NULL;
		struct movie* newnode =&obj[i];
			if(head==NULL){
			head= newnode;
		}else{
			struct movie* temp=head;
			while(temp->next!=NULL){
				temp=temp->next;
			}
			temp->next=newnode;
			top++;
		}
	}
}
void pop(){
	if(top==-1){
		printf("Nothing to pop\n");
	}else if(top>0){
		struct movie* temp=head;
		while(temp->next->next!=NULL){
			temp=temp->next;
		}
		printf("The element which is pop is:%s,%d,%f",temp->next->name,temp->next->pcount,temp->next->price);
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
		struct movie* temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		printf("\nThe top element of the stack is :%s,%d,%f\n",temp->name,temp->pcount,temp->price);
		top--;
	}
}

void main(){
	printf("Enter the size of the stack:\n");
	scanf("%d",&size);
	for(i=0;i<size;i++){
	push();
	}
	pop();
	peak();
	pop();
	pop();
	peak();
}
