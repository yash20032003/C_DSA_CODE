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
int nodecount(){
	dem* temp=head;
	int count=0;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	return count;
	printf("The total number of count are:%d",count);
}
void swap(){
	dem* temp=head;
	while(temp->next!=NULL)
	{
		if(temp->data > temp->next->data){
			int a=temp->data;
			temp->data=temp->next->data;
			temp->next->data=a;
		}
		temp=temp->next;
	}
}
void main(){
	char ch;
	int x;
	do{
	printf("What do you want to do:\n");
	printf("1.addnode\n2.addfirst\n3.addlast\n4.addatpos\n5.countnode\n6.printll\n7.delete first\n8.delete last\n9.delete at position\n");
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
			//int b;
			//printf("At which positon do you want to enter the node:");
			//scanf("%d",&b);
		    //addatpos(b);
		}
			break;
		case 5:{
			int count=nodecount();
			printf("The number of nodes are:%d",count);
		}
			break;
		case 6:
			printll();
			break;
		case 7:
		     swap();
			 break;
		case 8:
		     //dellast();
		     break;	 	
		case 9:{
			//int c;
			//printf("Which node do you want to delete:");
			//scanf("%d",&c);
		    //delatpos(c); 
		}
			break;    
		default:
			printf("wrong choice\n");	
    }
    printf("\nsuccessfully done!!!\n");
    printf("\nDo you want to continue...");
    scanf("%c",&ch);
    getchar();
	}while(ch ="y" || ch =="Y");
}
