//Write a program that takes a number from 1 to 5 and prints its spelling,
//if the number is greater than 5 print entered number is greater than 5
#include<stdio.h>
int main(){
	int a;
	printf("Enter the number between 1-5 : ");
	scanf("%d",&a);
	switch(a){
		case 1:
			printf("spelling of 1 is One\n");
			break;
		case 2:
			printf("spelling of 2 is Two\n");
			break;
		case 3:
			printf("spelling of 3 is Three\n");
			break;
		case 4:
			printf("spelling of 4 is Four\n");
			break;
		case 5:
			printf("spelling of 5 is Five\n");
			break;				
		case 6:
			printf("Entered number is grater then 5\n");
			break;	
	}
	return 0;
}
