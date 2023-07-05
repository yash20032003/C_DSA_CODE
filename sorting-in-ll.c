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
	if(head==NULL){
		head=newnode;
	}else{
		if(newnode->data<head->data){
			
	        newnode->next=head;
	        head=newnode;
        }
	 
		else{
			dem* temp=head;
			while(temp->next!=NULL){
				temp=temp->next;
			}
			if(newnode->data>temp->data){
				temp->next=newnode;
			}
			else{
				int pos=1;
				dem* temp=head;
				while(temp->next!=NULL){
				if(temp->data<newnode->data){
					pos++;
					if(newnode->data<temp->next->data){
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

void printll(){
	dem *temp=head;
	while(temp!= NULL){
		printf("|%d|",temp->data);
		temp=temp->next;
	}
}


void main(){
	char ch;
	int x;
	do{
	printf("What do you want to do:\n");
	printf("1.addnode\n2.addfirst\n3.addlast\n4.addatpos\n5.countnode\n6.printll\n");
	printf("Enter your choice:\n ");
	scanf("%d",&x);
	switch(x){
		case 1:
			addnode();
			break;
		case 2:
			//addfirst();
			break;
		case 3:
			//addlast();
			break;
		case 4:{
			int b;
			printf("At which positon do you want to enter the node:");
			scanf("%d",&b);
		    //addatpos(b);
		}
			break;
		case 5:{
			//int count=nodecount();
			//printf("The number of nodes are:%d",count);
		}
			break;
		case 6:
			printll();
			break;
		
		default:
			printf("wrong choice\n");	
    }
    printf("\nsuccessfully done!!!\n");
    getchar();
    printf("\nDo you want to continue...");
    scanf("%c",&ch);
	}while(ch =='y' || ch =='Y');
}

