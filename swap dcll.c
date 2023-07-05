#include <stdio.h>
#include <stdlib.h>

typedef struct doublell{
	struct doublell* prev;
	int data;
	struct doublell* next;
}node;
node* head=NULL;

node* createnode(){
	node* newnode=(node*)malloc(sizeof(node));
	newnode->prev=NULL;
	printf("Enter the date:\n");
	scanf("%d",&newnode->data);
    newnode->next=NULL;
    return newnode;
	}
	
void addnode(){
	node* newnode=createnode();
	if(head==NULL){
		head=newnode;
		newnode->next=head;
	}else{
		node* temp=head;
		while(temp->next!=head){
			temp= temp->next;
		}
			newnode->next=head;
			newnode->prev=temp;
			temp->next=newnode;
			head->prev=newnode;
	}
}

void printdll(){
	node* temp=head;
	while(temp->next!=head){
		printf("|%d|",temp->data);
		temp=temp->next;
	}
	printf("|%d|",temp->data);
}
void reverse(){
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    node* x=temp;
    while(temp->prev!=x){
        printf("|%d|",temp->data);
        temp=temp->prev;
    }
    printf("|%d|",temp->data);
}
void swap(){
    int count=nodecount();
    node* temp1=head;
    node* temp2= head;
    while(temp2->next!=head){
        temp2=temp2->next;
    }
    if(count>2){
        int x=count/2;
        while(x){
            int y;
            y=temp1->data;
            temp1->data=temp2->data;
            temp2->data=y;
            temp1=temp1->next;
            temp2=temp2->prev;
            x--;
        }
    }else if(count==2){
        int z;
        z=head->next->data;
        head->next->data=head->data;
        head->data=z;
    }else{
        printf("\nswapping can not be performed\n");
    }
}
int nodecount(){
	node* temp=head;
	int count=0;
	while(temp->next!=head){
		temp=temp->next;
		count++;
	}
	 count=count+1;
	printf("\nNumber of nodes are:%d\n",count);
	return count;
}
void main(){
    int a,i;
    printf("HOw many nodes:");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        addnode();
    }
    printdll();
    printf("\n");
    swap();
    printf("\n");
    printdll();
    printf("\n");
    printdll();
}
