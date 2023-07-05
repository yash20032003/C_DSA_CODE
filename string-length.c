#include <stdio.h>
#include <stdlib.h>
typedef struct demo{
	char name[40];
	struct demo *next;
}dem;
dem *head=NULL;
dem* createnode(){
	dem *newnode=(dem*)malloc(sizeof(dem));
	printf("Enter the data\n");
	scanf("%s",&newnode->name);
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
		printf("|%s|",temp->name);n
		temp=temp->next;
	}
}

int datalength()
{
	int a,i=0;
	char arr[100];
	printf("enter the length\n");
	scanf("%d",&a);
	dem* temp=head;
	while(temp->next!=NULL)
	{
	    arr[100]=temp->name;
	for(i=0;arr[i]!='\0';++i);
		if(i==a){
			printf("%s",arr);
		}
		temp=temp->next;
	}
	return 0;
}

int main(){
	int x,i,y;
	printf("How many node do you want to enter:\n");
	scanf("%d",&x);
	for(i=0;i<x;i++){
		addnode();
	}
	printll();
    printf("\n");
   datalength();
    
    return 0;
}

