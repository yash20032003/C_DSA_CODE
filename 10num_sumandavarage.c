//WAP to get 10 numbers from Users and find their sum and average
#include<stdio.h>
int main(){
	int a,b,c,d,e,f,g,h,i,j;
	printf("Take 10 numbers from user :");
	scanf("%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
	
	int sum = a+b+c+d+e+f+g+h+i+j;
	printf("\nThe sum is :%d",sum);
	
	float avarage=sum%10;
	printf("\nThe aveage is :%f",avarage);
	
	return 0;
	
}
