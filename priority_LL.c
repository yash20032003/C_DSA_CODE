#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	int pri;
	struct node* next;
};
int b,c;
struct node* head=NULL;

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
	{
	if(head==NULL){
		head=newnode;
	}else{
		if(newnode->pri<=head->pri)
		{
			newnode->next=head;
			head=newnode;
		}else{
			struct node* temp=head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			if(newnode->pri>=temp->pri)
				{
					temp->next=newnode;
				}else
				{
					struct node* temp=head;
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
	struct node* temp=head;
	if(head==NULL){
		printf("Queue is empty");
	}else
	{
		if(head->next==NULL){
			printf("The highest priority element: %d\n",head->pri);
			free(head);		
	    }
	    else{
	    	while(temp->next->next!=NULL){
	    		temp=temp->next;
			}
			printf("The highest priority element: %d\n",temp->next->pri);
			free(temp->next);
			temp->next=NULL;
		}
	}
}
void printpl()
{
	struct node* temp=head;
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
	printf("1. addnode\n2.deletenode\n3.printpl\n");
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
			printpl();
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
