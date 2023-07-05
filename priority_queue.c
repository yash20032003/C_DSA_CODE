#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	int pri;
	struct node* next;
};
int b,c;
struct node* front = NULL;
struct node* rear=NULL;

struct node*  createnode(){
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data\n");
	scanf("%d",&newnode->data);
	printf("Enter the priority number\n");
	scanf("%d",&newnode->pri);
if(newnode->pri>b && newnode->pri<c ){
		
	    printf("valid range\n");
	    newnode->next=NULL;
	    return newnode;
	}else{
		printf("invalid rang\n");
    }
}

void addnode(){
	struct node* newnode= createnode();
	if(newnode==NULL){
		printf("Queue is overflow\n");
	}else{
	if(front==NULL){
		front=newnode;
		rear=newnode;
	}else{
		if(newnode->pri<=front->pri)
		{
			newnode->next=front;
			front=newnode;
		}else{
			struct node* temp=front;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			if(newnode->pri>=temp->pri)
				{
					temp->next=newnode;
					rear=newnode;
				}else
				{
					struct node* temp=front;
					while(temp->next!=NULL)
					{
						if(temp->pri<newnode->pri)
						{
							if(newnode->pri<temp->next->pri)
							{
								newnode->next=temp->next;
								temp->next=newnode;
							}
						}
						temp=temp->next;
					}
				}
			}
			
		}
	}
}
void deletenode(){
		if(front==rear){
			printf("The element which is deleted:%d\n",front->data);
			free(front);
			printf("NOw queue is full deleted\n");
		}else{
			printf("The element which is deleted:%d",front->data);
			front=front->next;
		}
	}
void printpql()
{
	struct node* temp=front;
	while(temp!=NULL)
	{
		printf("|%d,%d|",temp->data,temp->pri);
		temp= temp->next;
	}
	printf("\n");
}

void main(){
	int a;
	char ch;
	printf("Enter the priority range\n");
	printf("starting range:");
	scanf("%d",&b);
	printf("Ending range:");
	scanf("%d",&c);
	do{
	printf("1. addnode\n2.deletenode\n3.printpql\n");
	printf("Enter the choice\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:{
			
			addnode();
			
		}
		    break;
		case 2:
			deletenode();
			break;
		case 3:
			printpql();
			break;
		default:
		    printf("Wrong choice\n");
			break;		
	}
	printf("successfully done\n");
	getchar();
	printf("Do you want to continue:\n");
	scanf("%c",&ch);
	getchar();
}while(ch=='y'|| ch=='Y');	
}

