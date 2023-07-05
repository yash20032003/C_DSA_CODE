#include <stdio.h>
#include <stdlib.h>
typedef struct demo{
	int data;
	struct demo *next;
}dem;
dem *head=NULL;
dem* createnode(){
	dem *newnode=(dem*)malloc(sizeof(dem));
	printf("Enter the data\n");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	return newnode;
}

void addnode(){
	dem *newnode=createnode();
	dem *temp=head;
	if(head==NULL){
		head=newnode;
	}else{
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
	}
}
void printll(){
	dem *temp=head;
	while(temp!= NULL){
		printf("|%d|",temp->data);
		temp=temp->next;
	}
}


void occerence(int a){
	int count=0;
	dem* temp=head;
	while(temp!=NULL){
		if(temp->data==a){
			count++;
			printf("Data is present at %d node",count);
		}
		else{
			count++;
		}
		temp=temp->next;
	}
}


void main(){
	int x,i,y;
	printf("How many node do you want to enter:\n");
	scanf("%d",&x);
	for(i=0;i<x;i++){
		addnode();
	}
	printll();
	printf("Which node do you want to find???");
	scanf("%d",&y);
	accerence(y);
}

