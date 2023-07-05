#include<stdio.h>
#include<string.h>
typedef struct employee{
	char ename[20];
	int eid;
	float esalary;
	struct employee *next;
}emp;

void main(){
	int a,i,j;
	emp obj[100];
	printf("Enter the number of object:\n");
	scanf("%d",&a);
	for(i=0;i<a;i++){
		emp obj[i];
	}

	
	struct employee *head=&obj[0];
	
	strcpy(obj[0].ename,"yash");
	obj[0].eid=101;
	obj[0].esalary=100.00;
	obj[0].next=&obj[1];
	
	strcpy(obj[1].ename,"pratik");
	obj[1].eid=102;
	obj[1].esalary=200.00;
	obj[1].next=&obj[2];
	
	strcpy(obj[2].ename,"rutuparn");
	obj[2].eid=103;
	obj[2].esalary=300.00;
	obj[2].next=NULL;
	
	//printf("Enter the name of Employee : \n%s",obj1.ename);
	/*
	printf("Enter the name of Employee : %s\n",(*head).ename); //head->ename
	printf("Enter the Id of the employee: %d\n",head->eid);
	printf("Enter the salary of the employee:%f\n",head->esalary);
	printf("\n");
	
	printf("Enter the name of Employee : %s\n",obj[0].next->ename); //*(head.next).ename
	printf("Enter the Id of the employee: %d\n",(obj[0].next)->eid);//head->next->eid;
	printf("Enter the salary of the employee:%f\n",(obj[0].next)->esalary);
	printf("\n");
	printf("Enter the name of Employee : %s\n",(obj[1].next)->ename); 
	printf("Enter the Id of the employee: %d\n",obj[1].next->eid);
	printf("Enter the salary of the employee:%f\n",obj[1].next->esalary);

	*/
	for(j=0;j<a;j++){
	  printf("Enter the name of Employee : %s\n",(obj[j]).ename); tgggfhgfgfgfgfgfhghj
	  printf("Enter the Id of the employee: %d\n",obj[j].eid);
	  printf("Enter the salary of the employee:%f\n",obj[j].esalary);
	  printf("\n");
	}
}
