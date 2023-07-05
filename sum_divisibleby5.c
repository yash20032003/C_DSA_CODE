//4. WAP to Find the sum of numbers that are divisible by 5 in the given range

#include<stdio.h>
int main(){
int num,temp=0;
for(num=1;num<=100;num++){
	if(num%5==0){
		printf("%d is divisible by 5\n");
		temp=temp+num;
	}
}
printf("The sum of the number which is divisible by 5 is : %d",temp);
return 0;
}
