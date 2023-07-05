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
	if(head==NULL){
		printf("\nNO node is present\n");
	}else{
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
}
void adddigit(){
	int sum=0,n,m;
	dem* temp=head;
	while(temp!=NULL){
		n=temp->data;
		while(n>0){
			 m=n%10;
			
			sum=sum+m;
			n=n/10;
		}
		printf("|%d|",sum);
		sum=0;
		temp= temp->next;
	}
}

void palidrome(){
	int sum=0,n,r,temp1;
	dem* temp=head;
	while(temp->next!=NULL){
	n=temp->data;
	temp1=temp->data;
	while(n>0){
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}	
	if(temp1==sum){
		printf("%d is palidrome",temp1);
	}
	sum=0;
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


int main(){
	int x,i,y;
	printf("How many node do you want to enter:\n");
	scanf("%d",&x);
	for(i=0;i<x;i++){
		addnode();
	}
	printll();
    printf("\n");
    palidrome();
    
    return 0;
}

