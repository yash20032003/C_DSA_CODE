//6. Write a program to print reverse from 100-1

#include<stdio.h>
int main(){
	int num,i;
	printf("Enter the number which is less then 100: ");
	scanf("%d",&num);
	
	if(i>=num){
		printf("%d",i);
		i--;
	}
	return 0;
}
